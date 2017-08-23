#pragma once

#include "..\UnityEngine\Vector3.h"
#include "LazyAimProperties.h"
#include "..\UnityEngine\Quaternion.h"

namespace rust 
{
	class PlayerEyes : public EntityComponent`1 // 0x20
	{
	public:
		LazyAimProperties* defaultLazyAim; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3 thirdPersonSleepingOffset; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 viewOffset; // 0x34 (size: 0xc, flags: 0x81, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x40 (size: 0x10, flags: 0x86, type: 0x11)
		UnityEngine::Quaternion headRotation; // 0x50 (size: 0x10, flags: 0x86, type: 0x11)
		UnityEngine::Quaternion rotationLook; // 0x60 (size: 0x10, flags: 0x86, type: 0x11)
		UnityEngine::Quaternion lazyRotation; // 0x70 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x80
}
