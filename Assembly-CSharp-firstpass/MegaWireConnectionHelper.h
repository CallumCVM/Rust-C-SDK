#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class MegaWireConnectionHelper : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<MegaWireConnectionDef>* connections; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		bool showgizmo; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
