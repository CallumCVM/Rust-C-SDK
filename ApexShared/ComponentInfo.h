#pragma once

#include "..\UnityEngine\MonoBehaviour.h"
#include "..\Apex\ApexComponentMaster\ComponentCategory.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ComponentInfo : public Object // 0x0
	{
	public:
		UnityEngine::MonoBehaviour* component; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Apex::ApexComponentMaster::ComponentCategory* category; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		int id; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int idx; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		bool isVisible; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
