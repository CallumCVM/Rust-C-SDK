#pragma once

#include "..\UnityEngine\Rendering\AmbientMode.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class CameraEx : public MonoBehaviour // 0x18
	{
	public:
		bool overrideAmbientLight; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Rendering::AmbientMode ambientMode; // 0x1c (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Color ambientGroundColor; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color ambientEquatorColor; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color ambientLight; // 0x40 (size: 0x10, flags: 0x6, type: 0x11)
		float ambientIntensity; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color old_ambientLight; // 0x54 (size: 0x10, flags: 0x3, type: 0x11)
		UnityEngine::Color old_ambientGroundColor; // 0x64 (size: 0x10, flags: 0x3, type: 0x11)
		UnityEngine::Color old_ambientEquatorColor; // 0x74 (size: 0x10, flags: 0x3, type: 0x11)
		float old_ambientIntensity; // 0x84 (size: 0x4, flags: 0x3, type: 0xc)
		UnityEngine::Rendering::AmbientMode old_ambientMode; // 0x88 (size: 0x4, flags: 0x3, type: 0x11)
		float aspect; // 0x8c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x90
}
