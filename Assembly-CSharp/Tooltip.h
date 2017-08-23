#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class Tooltip : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* Text; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::GameObject* TooltipObject; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
