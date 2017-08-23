#pragma once

#include "..\System\CodeDom\Compiler\IndentedTextWriter.h"
#include "..\System\CodeDom\Compiler\CodeGeneratorOptions.h"
#include "..\System\CodeDom\CodeTypeMember.h"
#include "..\System\CodeDom\CodeTypeDeclaration.h"
#include "..\System\CodeDom\Compiler\CodeGenerator\Visitor.h"

namespace System
{
	namespace CodeDom
{
{
		namespace Compiler
{
	class CodeGenerator : public Object // 0x0
	{
	public:
		System::CodeDom::Compiler::IndentedTextWriter* output; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::Compiler::CodeGeneratorOptions* options; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeMember* currentMember; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeDeclaration* currentType; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::Compiler::CodeGenerator::Visitor* visitor; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
