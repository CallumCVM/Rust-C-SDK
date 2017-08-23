#pragma once

#include "..\UnityEngine\PropertyName.h"
#include "..\UnityEngine\Object.h"

namespace UnityEngine
{
	template <typename T0>
	class ExposedReference : public ValueType // 0x0
	{
	public:
		UnityEngine::PropertyName exposedName; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Object* defaultValue; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
