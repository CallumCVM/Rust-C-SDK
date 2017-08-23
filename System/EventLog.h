#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\ComponentModel\ISynchronizeInvoke.h"
#include "..\System\Diagnostics\EventLogImpl.h"
#include "..\System\Diagnostics\EntryWrittenEventHandler.h"

namespace System
{
	namespace Diagnostics
{
	class EventLog : public Component // 0x30
	{
	public:
		UnityEngine::UnicodeString* source; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* logName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* machineName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::EventLogImpl* Impl; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::EntryWrittenEventHandler* EntryWritten; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		bool doRaiseEvents; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
