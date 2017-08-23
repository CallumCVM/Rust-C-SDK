#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ProcInfo : public ValueType // 0x0
	{
	public:
		__int64 process_handle; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 thread_handle; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		int pid; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int tid; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString** envKeys; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** envValues; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* UserName; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Domain; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		__int64 Password; // 0x48 (size: 0x8, flags: 0x6, type: 0x18)
		bool LoadUserProfile; // 0x50 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x58
}
