#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Light.h"
#include "..\UnityEngine\GUIStyle.h"

namespace rust 
{
	class ExplosionDemoGUI : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* Prefabs; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Light* Sun; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* currentInstance; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GUIStyle* guiStyleHeader; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		float reactivateTime; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		int currentNomber; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		float sunIntensity; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		float dpiScale; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
