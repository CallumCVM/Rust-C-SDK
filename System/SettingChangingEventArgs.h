#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

namespace System
{
	namespace Configuration
{
	class SettingChangingEventArgs : public CancelEventArgs // 0x18
	{
	public:
		UnityEngine::UnicodeString* settingName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* settingClass; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* settingKey; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object newValue; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x38
}
