#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Color32.h"

namespace UnityEngine
{
	class TreeInstance : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 position; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		float widthScale; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float heightScale; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float rotation; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color32 color; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Color32 lightmapColor; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
		int prototypeIndex; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		float temporaryDistance; // 0x34 (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x38
}
