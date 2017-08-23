#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ChildrenFromScene : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* SceneName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		bool StartChildrenDisabled; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
