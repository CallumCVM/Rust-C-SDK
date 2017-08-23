#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeAttributeArgument : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeExpression* value; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
