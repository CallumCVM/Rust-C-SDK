#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\LayerMask.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class PhysicsRaycaster : public BaseRaycaster // 0x18
	{
	public:
		UnityEngine::Camera* m_EventCamera; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::LayerMask m_EventMask; // 0x20 (size: 0x4, flags: 0x4, type: 0x11)
	}; // size = 0x28
}
