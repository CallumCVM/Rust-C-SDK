#pragma once

#include "..\System\IO\FileAccess.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Microsoft\Win32\SafeHandles\SafeFileHandle.h"

namespace System
{
	namespace IO
{
	class FileStream : public Stream // 0x18
	{
	public:
		System::IO::FileAccess access; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		bool owner; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
		bool async; // 0x1d (size: 0x1, flags: 0x1, type: 0x2)
		bool canseek; // 0x1e (size: 0x1, flags: 0x1, type: 0x2)
		__int64 append_startpos; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		bool anonymous; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* buf; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		int buf_size; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int buf_length; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		int buf_offset; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		bool buf_dirty; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 buf_start; // 0x48 (size: 0x8, flags: 0x1, type: 0xa)
		UnityEngine::UnicodeString* name; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		__int64 handle; // 0x58 (size: 0x8, flags: 0x1, type: 0x18)
		Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
