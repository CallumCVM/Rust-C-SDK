#pragma once

#include "..\System\IO\FileSystemWatcher.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class InotifyData : public Object // 0x0
	{
	public:
		System::IO::FileSystemWatcher* FSW; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* Directory; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		int Watch; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
