#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class ProfileData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* description; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::List<float>* history; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		System::Diagnostics::Stopwatch* sw; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		float last; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		int lastFrame; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
