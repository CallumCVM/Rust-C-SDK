#pragma once

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class LobbyReadyToBeginMessage : public MessageBase // 0x0
	{
	public:
		unsigned char slotId; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		bool readyState; // 0x11 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x18
}
