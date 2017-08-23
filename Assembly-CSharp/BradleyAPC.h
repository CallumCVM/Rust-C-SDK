#pragma once

#include "..\UnityEngine\WheelCollider.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\Collider.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class BradleyAPC : public BaseCombatEntity // 0x1e8
	{
	public:
		UnityEngine::WheelCollider* leftWheels; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::WheelCollider* rightWheels; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Transform* centerOfMass; // 0x1f8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rigidbody* myRigidBody; // 0x200 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Collider* myCollider; // 0x208 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* followTest; // 0x210 (size: 0x8, flags: 0x6, type: 0x12)
		float moveForceMax; // 0x218 (size: 0x4, flags: 0x6, type: 0xc)
		float brakeForce; // 0x21c (size: 0x4, flags: 0x6, type: 0xc)
		float throttle; // 0x220 (size: 0x4, flags: 0x6, type: 0xc)
		float turnForce; // 0x224 (size: 0x4, flags: 0x6, type: 0xc)
		float sideStiffnessMax; // 0x228 (size: 0x4, flags: 0x6, type: 0xc)
		float sideStiffnessMin; // 0x22c (size: 0x4, flags: 0x6, type: 0xc)
		float turning; // 0x230 (size: 0x4, flags: 0x6, type: 0xc)
		bool brake; // 0x234 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 destination; // 0x238 (size: 0xc, flags: 0x6, type: 0x11)
		float stoppingDist; // 0x244 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x248
}
