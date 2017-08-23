#pragma once

#include "..\System\CodeDom\CodeParameterDeclarationExpressionCollection.h"
#include "..\System\CodeDom\CodeTypeReference.h"

namespace System
{
	namespace CodeDom
{
	class CodeTypeDelegate : public CodeTypeDeclaration // 0x88
	{
	public:
		System::CodeDom::CodeParameterDeclarationExpressionCollection* parameters; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* returnType; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x98
}
