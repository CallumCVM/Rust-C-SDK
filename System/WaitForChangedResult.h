#pragma once

#include "..\System\IO\WatcherChangeTypes.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class WaitForChangedResult : public ValueType // 0x0
	{
	public:
		System::IO::WatcherChangeTypes changeType; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* oldName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		bool timedOut; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
