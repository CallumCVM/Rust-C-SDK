#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\RenderTexture.h"

namespace rust 
{
	class Supersampling : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* sceneCamera; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Camera* screenCamera; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* rt; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		float Sampling; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x38
}
