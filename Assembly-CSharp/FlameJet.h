#pragma once

#include "..\UnityEngine\LineRenderer.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class FlameJet : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::LineRenderer* line; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3* lastWorldSegments; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Vector3* currentSegments; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		float tesselation; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		float length; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		float maxLength; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float drag; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		int numSegments; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		bool on; // 0x44 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Color startColor; // 0x48 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color endColor; // 0x58 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color currentColor; // 0x68 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x78
}
