#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class VertexColorAnimator : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<MeshHolder>* animationMeshes; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<float>* animationKeyframes; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		float timeScale; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
		int mode; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		float elapsedTime; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
