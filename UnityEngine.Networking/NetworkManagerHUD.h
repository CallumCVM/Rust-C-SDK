#pragma once

#include "..\UnityEngine\Networking\NetworkManager.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkManagerHUD : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Networking::NetworkManager* manager; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool showGUI; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		int offsetX; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		int offsetY; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		bool m_ShowServer; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
