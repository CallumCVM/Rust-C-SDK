#pragma once

#include "..\System\CodeDom\CodeTypeReference.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeDelegateCreateExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeTypeReference* delegateType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* methodName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeExpression* targetObject; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
