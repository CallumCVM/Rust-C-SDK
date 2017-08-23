#pragma once

#include "..\System\IO\FileSystemWatcher.h"

namespace System
{
	namespace Diagnostics
{
	class LocalFileEventLog : public EventLogImpl // 0x18
	{
	public:
		System::IO::FileSystemWatcher* file_watcher; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int last_notification_index; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool _notifying; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
