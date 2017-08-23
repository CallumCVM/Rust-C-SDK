#pragma once

#include "TOD_Sky.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class TOD_Camera : public MonoBehaviour // 0x18
	{
	public:
		TOD_Sky* sky; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Camera* cameraComponent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Transform* cameraTransform; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool DomePosToCamera; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 DomePosOffset; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
		bool DomeScaleToFarClip; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		float DomeScaleFactor; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x48
}
