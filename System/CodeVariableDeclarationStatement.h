#pragma once

#include "..\System\CodeDom\CodeExpression.h"
#include "..\System\CodeDom\CodeTypeReference.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeVariableDeclarationStatement : public CodeStatement // 0x30
	{
	public:
		System::CodeDom::CodeExpression* initExpression; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* type; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x48
}
