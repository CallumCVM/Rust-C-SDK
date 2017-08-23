#pragma once

#include "..\UnityEngine\GUILayoutOption\Type.h"
#include "..\System\Object.h"

namespace UnityEngine
{
	class GUILayoutOption : public Object // 0x0
	{
	public:
		System::Object value; // 0x10 (size: 0x8, flags: 0x3, type: 0x1c)
		UnityEngine::GUILayoutOption::Type type; // 0x18 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x20
}
