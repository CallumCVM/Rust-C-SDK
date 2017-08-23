#pragma once

namespace UnityEngine
{
	namespace Networking
{
	class NetworkLobbyPlayer : public NetworkBehaviour // 0x30
	{
	public:
		bool ShowLobbyGUI; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		unsigned char m_Slot; // 0x31 (size: 0x1, flags: 0x1, type: 0x5)
		bool m_ReadyToBegin; // 0x32 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
