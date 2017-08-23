#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Matrix4x4.h"

namespace rust 
{
	class MegaWireWatch : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* watch; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool realtime; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Matrix4x4 mat; // 0x24 (size: 0x40, flags: 0x6, type: 0x11)
	}; // size = 0x68
}
