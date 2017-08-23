#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\NetworkSystem\PeerInfoPlayer.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class PeerInfoMessage : public MessageBase // 0x0
	{
	public:
		UnityEngine::UnicodeString* address; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Networking::NetworkSystem::PeerInfoPlayer* playerIds; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		int connectionId; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		int port; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		bool isHost; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool isYou; // 0x29 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
