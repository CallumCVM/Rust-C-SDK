#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\MonoIOStat.h"

namespace System
{
	namespace IO
{
	class FileSystemInfo : public MarshalByRefObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* FullPath; // 0x18 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::UnicodeString* OriginalPath; // 0x20 (size: 0x8, flags: 0x4, type: 0xe)
		System::IO::MonoIOStat stat; // 0x28 (size: 0x30, flags: 0x3, type: 0x11)
		bool valid; // 0x58 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x60
}
