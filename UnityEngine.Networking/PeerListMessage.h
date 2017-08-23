#pragma once

#include "..\UnityEngine\Networking\NetworkSystem\PeerInfoMessage.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class PeerListMessage : public MessageBase // 0x0
	{
	public:
		UnityEngine::Networking::NetworkSystem::PeerInfoMessage* peers; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		int oldServerConnectionId; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
