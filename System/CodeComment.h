#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeComment : public CodeObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* text; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool docComment; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
