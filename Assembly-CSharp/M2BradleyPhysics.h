#pragma once

#include "m2bradleyAnimator.h"
#include "..\UnityEngine\WheelCollider.h"
#include "..\UnityEngine\Rigidbody.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class M2BradleyPhysics : public MonoBehaviour // 0x18
	{
	public:
		m2bradleyAnimator* m2Animator; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::WheelCollider* Wheels; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::WheelCollider* TurningWheels; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Rigidbody* mainRigidbody; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* waypoints; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3 currentWaypoint; // 0x40 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 nextWaypoint; // 0x4c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
