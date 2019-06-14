#include <cstdio>
#include <memory>

#include "ResourceLimits.h"
#include "./../glslang/Public/ShaderLang.h"
#include "../SPIRV/GlslangToSpv.h"
#include "../SPIRV/doc.h"

const char* input = R"(
#version 330

void main()
{
  gl_FragColor = vec4(0.4, 0.4, 0.8, 1.0);
}
)";

int main(int argc, char ** argv) {
  glslang::InitializeProcess();
  {
    std::unique_ptr<glslang::TShader> shader(new glslang::TShader(EShLangFragment));
    shader->setStrings(&input, 1);
    shader->setEnvInput(glslang::EShSourceGlsl, EShLangFragment, glslang::EShClientVulkan, 100);
    shader->setEnvClient(glslang::EShClientVulkan, glslang::EShTargetVulkan_1_1);
    shader->setEnvTarget(glslang::EShTargetSpv, glslang::EShTargetSpv_1_3);
    shader->parse(&glslang::DefaultTBuiltInResource, 100, true, EShMsgDefault);

    std::unique_ptr<glslang::TProgram> program(new glslang::TProgram);
    program->addShader(shader.get());
    program->link(EShMsgDefault);

    std::vector<unsigned int> spirv;
    std::string warningsErrors;
    glslang::SpvOptions spvOptions;
    spvOptions.generateDebugInfo = false;
    spvOptions.disableOptimizer = false;
    spvOptions.optimizeSize = false;
    spvOptions.disassemble = false;
    spvOptions.validate = false;
    glslang::GlslangToSpv(*program->getIntermediate(EShLangFragment), spirv, nullptr, &spvOptions);
  }
  glslang::FinalizeProcess();
}
