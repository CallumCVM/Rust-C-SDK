#pragma once

#include "..\System\Int16.h"
#include "..\UnityEngine\Networking\NetworkInstanceId.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class ReconnectMessage : public MessageBase // 0x0
	{
	public:
		unsigned char* msgData; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		int oldConnectionId; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		System::Int16 playerControllerId; // 0x1c (size: 0x2, flags: 0x6, type: 0x6)
		UnityEngine::Networking::NetworkInstanceId netId; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		int msgSize; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
