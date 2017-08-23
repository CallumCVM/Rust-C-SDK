#pragma once

#include "..\System\IO\FileSystemWatcher.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace IO
{
	class DefaultWatcherData : public Object // 0x0
	{
	public:
		System::IO::FileSystemWatcher* FSW; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* Directory; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* FileMask; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System::Collections::Hashtable* Files; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		bool IncludeSubdirs; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool Enabled; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		bool NoWildcards; // 0x32 (size: 0x1, flags: 0x6, type: 0x2)
		System::DateTime DisabledTime; // 0x38 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
