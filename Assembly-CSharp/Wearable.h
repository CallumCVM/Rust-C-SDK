#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Wearable : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* followBone; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		RemoveSkin removeSkin; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		bool showCensorshipCube; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
		bool showCensorshipCubeBreasts; // 0x25 (size: 0x1, flags: 0x6, type: 0x2)
		OccupationSlots occupationUnder; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		OccupationSlots occupationOver; // 0x2c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
