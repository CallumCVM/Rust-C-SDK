#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeGotoStatement : public CodeStatement // 0x30
	{
	public:
		UnityEngine::UnicodeString* label; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
