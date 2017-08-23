#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class MoveOverTime : public MonoBehaviour // 0x18
	{
	public:
		float speed; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 position; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 rotation; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 scale; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
