#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\Translate\Phrase.h"
#include "HitArea.h"

namespace rust 
{
	class BoneProperty : public Object // 0x0
	{
	public:
		UnityEngine::GameObject* bone; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* name; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		HitArea area; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x28
}
