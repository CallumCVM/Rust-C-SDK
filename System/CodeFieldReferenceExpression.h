#pragma once

#include "..\System\CodeDom\CodeExpression.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeFieldReferenceExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeExpression* targetObject; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* fieldName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
