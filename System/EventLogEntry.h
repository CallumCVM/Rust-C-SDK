#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Int16.h"
#include "..\System\Diagnostics\EventLogEntryType.h"
#include "..\System\DateTime.h"

namespace System
{
	namespace Diagnostics
{
	class EventLogEntry : public Component // 0x30
	{
	public:
		UnityEngine::UnicodeString* category; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* data; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* machineName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* message; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** replacementStrings; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* source; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* userName; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		System::Int16 categoryNumber; // 0x68 (size: 0x2, flags: 0x1, type: 0x6)
		System::Diagnostics::EventLogEntryType entryType; // 0x6c (size: 0x4, flags: 0x1, type: 0x11)
		int eventID; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		int index; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		System::DateTime timeGenerated; // 0x78 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime timeWritten; // 0x88 (size: 0x10, flags: 0x1, type: 0x11)
		__int64 instanceId; // 0x98 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0xa0
}
