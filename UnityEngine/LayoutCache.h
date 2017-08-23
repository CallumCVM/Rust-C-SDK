#pragma once

#include "..\UnityEngine\GUILayoutGroup.h"
#include "..\UnityEngineInternal\GenericStack.h"

namespace rust 
{
	class LayoutCache : public Object // 0x0
	{
	public:
		UnityEngine::GUILayoutGroup* topLevel; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngineInternal::GenericStack* layoutGroups; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::GUILayoutGroup* windows; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
