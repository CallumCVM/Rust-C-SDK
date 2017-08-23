#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\FileAttributes.h"
#include "..\System\DateTime.h"

namespace System
{
	namespace IO
{
	class FileData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Directory; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::IO::FileAttributes Attributes; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		bool NotExists; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
		System::DateTime CreationTime; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		System::DateTime LastWriteTime; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
