#pragma once

#include "..\UnityEngine\GUIStyle.h"

namespace rust 
{
	class ExplosionsFPS : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GUIStyle* guiStyleHeader; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		float timeleft; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
		float fps; // 0x24 (size: 0x4, flags: 0x1, type: 0xc)
		int frames; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
