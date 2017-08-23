#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\FileAttributes.h"

namespace System
{
	namespace IO
{
	class MonoIOStat : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::IO::FileAttributes Attributes; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		__int64 Length; // 0x20 (size: 0x8, flags: 0x6, type: 0xa)
		__int64 CreationTime; // 0x28 (size: 0x8, flags: 0x6, type: 0xa)
		__int64 LastAccessTime; // 0x30 (size: 0x8, flags: 0x6, type: 0xa)
		__int64 LastWriteTime; // 0x38 (size: 0x8, flags: 0x6, type: 0xa)
	}; // size = 0x40
}
