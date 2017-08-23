#pragma once

#include "..\System\IO\WatcherChangeTypes.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class FileSystemEventArgs : public EventArgs // 0x0
	{
	public:
		UnityEngine::UnicodeString* directory; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::WatcherChangeTypes changeType; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
