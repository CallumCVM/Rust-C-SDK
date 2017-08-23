#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\EasyAntiCheat\Client\StateChangeType.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class StateChangedEventArgs : public EventArgs // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Message>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		EasyAntiCheat::Client::StateChangeType <Type>k__BackingField; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
