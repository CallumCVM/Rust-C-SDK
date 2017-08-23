#pragma once

#include "..\System\CodeDom\CodeRegionMode.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeRegionDirective : public CodeDirective // 0x18
	{
	public:
		UnityEngine::UnicodeString* regionText; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeRegionMode regionMode; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
