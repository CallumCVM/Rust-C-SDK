#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Matrix4x4.h"

namespace rust 
{
	class RigInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* root; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString** bones; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Matrix4x4* transforms; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Matrix4x4 rootTransform; // 0x28 (size: 0x40, flags: 0x6, type: 0x11)
	}; // size = 0x68
}
