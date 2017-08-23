#pragma once

#include "BasePlayer.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class DevMovePlayer : public BaseMonoBehaviour // 0x18
	{
	public:
		BasePlayer* player; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* Waypoints; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		int waypointIndex; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		bool moveRandomly; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 destination; // 0x30 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 lookPoint; // 0x3c (size: 0xc, flags: 0x6, type: 0x11)
		float randRun; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x50
}
