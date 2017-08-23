#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Networking\NetworkTransform.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkTransformVisualizer : public NetworkBehaviour // 0x30
	{
	public:
		UnityEngine::GameObject* m_VisualizerPrefab; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkTransform* m_NetworkTransform; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* m_Visualizer; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
