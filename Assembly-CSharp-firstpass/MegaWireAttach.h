#pragma once

#include "MegaWire.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Transform.h"

namespace rust 
{
	class MegaWireAttach : public MonoBehaviour // 0x18
	{
	public:
		MegaWire* wire; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* parent; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		int span; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int connection; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		float alpha; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 offset; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
		bool align; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 rotate; // 0x44 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion locrot; // 0x50 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Matrix4x4 wtm; // 0x60 (size: 0x40, flags: 0x1, type: 0x11)
	}; // size = 0xa0
}
