#pragma once

#include "..\UnityEngine\Networking\NetworkInstanceId.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class PeerAuthorityMessage : public MessageBase // 0x0
	{
	public:
		int connectionId; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Networking::NetworkInstanceId netId; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		bool authorityState; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
