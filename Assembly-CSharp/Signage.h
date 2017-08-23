#pragma once

#include "..\GameMenu\Option.h"
#include "..\UnityEngine\GameObject.h"
#include "MeshPaintableSource.h"
#include "LODCell.h"

namespace rust 
{
	class Signage : public BaseCombatEntity // 0x1e8
	{
	public:
		GameMenu::Option __menuOption_Menu_ChangeText; // 0x1e8 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_LockSign; // 0x240 (size: 0x58, flags: 0x1, type: 0x11)
		GameMenu::Option __menuOption_Menu_UnLockSign; // 0x298 (size: 0x58, flags: 0x1, type: 0x11)
		UnityEngine::GameObject* changeTextDialog; // 0x2f0 (size: 0x8, flags: 0x6, type: 0x12)
		MeshPaintableSource* paintableSource; // 0x2f8 (size: 0x8, flags: 0x6, type: 0x12)
		LODCell* cell; // 0x300 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned int textureID; // 0x308 (size: 0x4, flags: 0x86, type: 0x9)
		unsigned int loadedTexture; // 0x30c (size: 0x4, flags: 0x3, type: 0x9)
		float textureRequestDistance; // 0x310 (size: 0x4, flags: 0x1, type: 0xc)
		bool textureRequestSent; // 0x314 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x318
}
