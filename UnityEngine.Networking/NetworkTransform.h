#pragma once

#include "..\UnityEngine\Networking\NetworkTransform\TransformSyncMode.h"
#include "..\UnityEngine\Networking\NetworkTransform\AxisSyncMode.h"
#include "..\UnityEngine\Networking\NetworkTransform\CompressionSyncMode.h"
#include "..\UnityEngine\Networking\NetworkTransform\ClientMoveCallback3D.h"
#include "..\UnityEngine\Networking\NetworkTransform\ClientMoveCallback2D.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\Rigidbody2D.h"
#include "..\UnityEngine\CharacterController.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\Networking\NetworkWriter.h"

namespace UnityEngine
{
	namespace Networking
{
	class NetworkTransform : public NetworkBehaviour // 0x30
	{
	public:
		UnityEngine::Networking::NetworkTransform::ClientMoveCallback3D* m_ClientMoveCallback3D; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkTransform::ClientMoveCallback2D* m_ClientMoveCallback2D; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rigidbody* m_RigidBody3D; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Rigidbody2D* m_RigidBody2D; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::CharacterController* m_CharacterController; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkWriter* m_LocalTransformWriter; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Networking::NetworkTransform::TransformSyncMode m_TransformSyncMode; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
		float m_SendInterval; // 0x64 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Networking::NetworkTransform::AxisSyncMode m_SyncRotationAxis; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Networking::NetworkTransform::CompressionSyncMode m_RotationSyncCompression; // 0x6c (size: 0x4, flags: 0x1, type: 0x11)
		bool m_SyncSpin; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		float m_MovementTheshold; // 0x74 (size: 0x4, flags: 0x1, type: 0xc)
		float m_VelocityThreshold; // 0x78 (size: 0x4, flags: 0x1, type: 0xc)
		float m_SnapThreshold; // 0x7c (size: 0x4, flags: 0x1, type: 0xc)
		float m_InterpolateRotation; // 0x80 (size: 0x4, flags: 0x1, type: 0xc)
		float m_InterpolateMovement; // 0x84 (size: 0x4, flags: 0x1, type: 0xc)
		bool m_Grounded; // 0x88 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Vector3 m_TargetSyncPosition; // 0x8c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_TargetSyncVelocity; // 0x98 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_FixedPosDiff; // 0xa4 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion m_TargetSyncRotation3D; // 0xb0 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_TargetSyncAngularVelocity3D; // 0xc0 (size: 0xc, flags: 0x1, type: 0x11)
		float m_TargetSyncRotation2D; // 0xcc (size: 0x4, flags: 0x1, type: 0xc)
		float m_TargetSyncAngularVelocity2D; // 0xd0 (size: 0x4, flags: 0x1, type: 0xc)
		float m_LastClientSyncTime; // 0xd4 (size: 0x4, flags: 0x1, type: 0xc)
		float m_LastClientSendTime; // 0xd8 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 m_PrevPosition; // 0xdc (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion m_PrevRotation; // 0xe8 (size: 0x10, flags: 0x1, type: 0x11)
		float m_PrevRotation2D; // 0xf8 (size: 0x4, flags: 0x1, type: 0xc)
		float m_PrevVelocity; // 0xfc (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x100
}
