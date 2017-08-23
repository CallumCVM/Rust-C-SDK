#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\PhysicMaterial.h"

namespace rust 
{
	class SplatType : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::PhysicMaterial* Material; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color AridColor; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color TemperateColor; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color TundraColor; // 0x40 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color ArcticColor; // 0x50 (size: 0x10, flags: 0x6, type: 0x11)
		float SplatTiling; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		float UVMIXMult; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		float UVMIXStart; // 0x68 (size: 0x4, flags: 0x6, type: 0xc)
		float UVMIXDist; // 0x6c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x70
}
