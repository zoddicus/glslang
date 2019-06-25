// Copyright 2019 The Shaderc Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <cstdio>
#include <emscripten.h>
#include <memory>

#include "../SPIRV/GlslangToSpv.h"
#include "../SPIRV/doc.h"
#include "./../glslang/Public/ShaderLang.h"
#include "ResourceLimits.h"

/*
 * Takes in a GLSL shader as a string and converts it to SPIR-V in binary form.
 *
 * |glsl|          Char array created using create_input_buffer and populated
 *                 with the shader to be converted.
 *                 This buffer must be destroyed using destroy_input_buffer.
 * |shader_type| - Magic number indicating the type of shader being processed.
 *                 Legal values are as follows:
 *                   Vertex = 0
 *                   Geometry = 3
 *                   Fragment = 4
 * |spirv|         Pointer to an output buffer that will be updated with the
 *                 resulting SPIR-V shader.
 *                 This buffer must be destroyed using destroy_output_buffer.
 *
 * |spirv_len|     Length of the output binary buffer.
 * |gen_debug|     Flag to indicate if debug information should be generated.
 *
 * Return 0 on success, non-0 on failure.
 */
EMSCRIPTEN_KEEPALIVE
int convert_glsl_to_spirv(const char* glsl, int shader_type, unsigned int** spirv, size_t* spirv_len, bool gen_debug)
{
    int ret_val = 0;
    if (glsl == nullptr || spirv == nullptr) {
        return 1;
    }
    *spirv = nullptr;

    if (shader_type != 0 && shader_type != 3 && shader_type != 4) {
        return 2;
    }

    EShLanguage shader_lang = static_cast<EShLanguage>(shader_type);

    glslang::InitializeProcess();
    {
        glslang::TShader shader(shader_lang);
        shader.setStrings(&glsl, 1);
        shader.setEnvInput(glslang::EShSourceGlsl, shader_lang, glslang::EShClientOpenGL, 100);
        shader.setEnvClient(glslang::EShClientVulkan, glslang::EShTargetVulkan_1_1);
        shader.setEnvTarget(glslang::EShTargetSpv, glslang::EShTargetSpv_1_3);
        shader.parse(&glslang::DefaultTBuiltInResource, 100, true, EShMsgDefault);

        glslang::TProgram program;
        program.addShader(&shader);
        program.link(EShMsgDefault);

        std::vector<unsigned int> output;
        std::string warningsErrors;
        glslang::SpvOptions spvOptions;
        spvOptions.generateDebugInfo = gen_debug;
        spvOptions.disableOptimizer = false;
        spvOptions.optimizeSize = false;
        spvOptions.disassemble = false;
        spvOptions.validate = false;

        glslang::GlslangToSpv(*program.getIntermediate(EShLangFragment), output, nullptr, &spvOptions);

        *spirv_len = output.size();
        *spirv = static_cast<unsigned int*>(malloc(*spirv_len * sizeof(unsigned int)));
        if (*spirv != nullptr) {
            memcpy(*spirv, output.data(), *spirv_len);
        } else {
            ret_val = 3;
        }
    }
    glslang::FinalizeProcess();
    return ret_val;
}

/*
 * Created a valid input buffer.
 *
 * Must be destroyed later using destroy_input_buffer.
 */
EMSCRIPTEN_KEEPALIVE
char* create_input_buffer(int count) { return static_cast<char*>(malloc(count * sizeof(char))); }

/*
 * Destroys a buffer created by create_input_buffer
 */
EMSCRIPTEN_KEEPALIVE
void destroy_input_buffer(char* p)
{
    if (p != nullptr)
        free(p);
}

/*
 * Destroys a buffer created by convert_glsl_to_spirv
 */
EMSCRIPTEN_KEEPALIVE
void destroy_ouput_buffer(unsigned int* p)
{
    if (p != nullptr)
        free(p);
}
