#pragma once

#include "..\UnityEngine\WheelCollider.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class BradleyMoveTest : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::WheelCollider* leftWheels; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::WheelCollider* rightWheels; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Transform* centerOfMass; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rigidbody* myRigidBody; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* followTest; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		float moveForceMax; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float brakeForce; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float throttle; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float turnForce; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float sideStiffnessMax; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float sideStiffnessMin; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float turning; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		bool brake; // 0x5c (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 destination; // 0x60 (size: 0xc, flags: 0x6, type: 0x11)
		float stoppingDist; // 0x6c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x70
}
