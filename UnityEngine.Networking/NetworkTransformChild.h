#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Networking\NetworkTransform.h"
#include "..\UnityEngine\Networking\NetworkTransform\AxisSyncMode.h"
#include "..\UnityEngine\Networking\NetworkTransform\CompressionSyncMode.h"
#include "..\UnityEngine\Networking\NetworkTransform\ClientMoveCallback3D.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\Networking\NetworkWriter.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkTransformChild : public NetworkBehaviour // 0x30
	{
	public:
		UnityEngine::Transform* m_Target; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkTransform* m_Root; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkTransform::ClientMoveCallback3D* m_ClientMoveCallback3D; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkWriter* m_LocalTransformWriter; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned int m_ChildIndex; // 0x50 (size: 0x4, flags: 0x1, type: 0x9)
		float m_SendInterval; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Networking::NetworkTransform::AxisSyncMode m_SyncRotationAxis; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Networking::NetworkTransform::CompressionSyncMode m_RotationSyncCompression; // 0x5c (size: 0x4, flags: 0x1, type: 0x11)
		float m_MovementThreshold; // 0x60 (size: 0x4, flags: 0x1, type: 0xc)
		float m_InterpolateRotation; // 0x64 (size: 0x4, flags: 0x1, type: 0xc)
		float m_InterpolateMovement; // 0x68 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 m_TargetSyncPosition; // 0x6c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion m_TargetSyncRotation3D; // 0x78 (size: 0x10, flags: 0x1, type: 0x11)
		float m_LastClientSyncTime; // 0x88 (size: 0x4, flags: 0x1, type: 0xc)
		float m_LastClientSendTime; // 0x8c (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 m_PrevPosition; // 0x90 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion m_PrevRotation; // 0x9c (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0xb0
}
