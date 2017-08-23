#pragma once

#include "..\UnityEngine\Object.h"

namespace rust 
{
	class ObjectList : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::Object* objects; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
