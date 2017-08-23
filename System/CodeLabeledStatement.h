#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\CodeStatement.h"

namespace System
{
	namespace CodeDom
{
	class CodeLabeledStatement : public CodeStatement // 0x30
	{
	public:
		UnityEngine::UnicodeString* label; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeStatement* statement; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
