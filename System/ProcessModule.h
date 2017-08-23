#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\FileVersionInfo.h"

namespace System
{
	namespace Diagnostics
{
	class ProcessModule : public Component // 0x30
	{
	public:
		UnityEngine::UnicodeString* filename; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Diagnostics::FileVersionInfo* version_info; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* modulename; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		__int64 baseaddr; // 0x48 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 entryaddr; // 0x50 (size: 0x8, flags: 0x1, type: 0x18)
		int memory_size; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x60
}
