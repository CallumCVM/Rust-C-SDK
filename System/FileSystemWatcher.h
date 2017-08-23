#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\NotifyFilters.h"
#include "..\System\ComponentModel\ISynchronizeInvoke.h"
#include "..\System\IO\WaitForChangedResult.h"
#include "..\System\IO\SearchPattern2.h"
#include "..\System\IO\FileSystemEventHandler.h"
#include "..\System\IO\ErrorEventHandler.h"
#include "..\System\IO\RenamedEventHandler.h"

namespace System
{
	namespace IO
{
	class FileSystemWatcher : public Component // 0x30
	{
	public:
		UnityEngine::UnicodeString* filter; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* path; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fullpath; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::WaitForChangedResult lastData; // 0x50 (size: 0x20, flags: 0x1, type: 0x11)
		System::IO::SearchPattern2* pattern; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* mangledFilter; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::FileSystemEventHandler* Changed; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::FileSystemEventHandler* Created; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::FileSystemEventHandler* Deleted; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::ErrorEventHandler* Error; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::RenamedEventHandler* Renamed; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		bool enableRaisingEvents; // 0xa8 (size: 0x1, flags: 0x1, type: 0x2)
		bool includeSubdirectories; // 0xa9 (size: 0x1, flags: 0x1, type: 0x2)
		int internalBufferSize; // 0xac (size: 0x4, flags: 0x1, type: 0x8)
		System::IO::NotifyFilters notifyFilter; // 0xb0 (size: 0x4, flags: 0x1, type: 0x11)
		bool waiting; // 0xb4 (size: 0x1, flags: 0x1, type: 0x2)
		bool disposed; // 0xb5 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xb8
}
