#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class RenamedEventArgs : public FileSystemEventArgs // 0x28
	{
	public:
		UnityEngine::UnicodeString* oldName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* oldFullPath; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
