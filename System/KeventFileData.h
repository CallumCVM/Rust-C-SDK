#pragma once

#include "..\System\IO\FileSystemInfo.h"
#include "..\System\DateTime.h"

namespace System
{
	namespace IO
{
	class KeventFileData : public Object // 0x0
	{
	public:
		System::IO::FileSystemInfo* fsi; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::DateTime LastAccessTime; // 0x18 (size: 0x10, flags: 0x6, type: 0x11)
		System::DateTime LastWriteTime; // 0x28 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
