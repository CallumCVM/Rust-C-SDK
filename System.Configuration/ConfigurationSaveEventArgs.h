#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"
#include "..\System\Exception.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationSaveEventArgs : public EventArgs // 0x0
	{
	public:
		UnityEngine::UnicodeString* <StreamPath>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object <Context>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Exception* <Exception>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool <Start>k__BackingField; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool <Failed>k__BackingField; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
