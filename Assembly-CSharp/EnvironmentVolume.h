#pragma once

#include "EnvironmentType.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\BoxCollider.h"

namespace rust 
{
	class EnvironmentVolume : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::BoxCollider* <trigger>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool StickyGizmos; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		EnvironmentType Type; // 0x24 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 Center; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 Size; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
