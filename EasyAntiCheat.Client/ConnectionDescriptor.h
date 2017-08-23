#pragma once

#include "..\EasyAntiCheat\Client\ConnectionStatus.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class ConnectionDescriptor : public ValueType // 0x0
	{
	public:
		EasyAntiCheat::Client::ConnectionStatus <Status>k__BackingField; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* <StatusMessage>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
