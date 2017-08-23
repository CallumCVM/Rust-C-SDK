#pragma once

#include "..\System\Action<UnityEngine\Texture2D>.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class ChangeSignText : public UIDialog // 0x20
	{
	public:
		System::Action<UnityEngine::Texture2D> onUpdateTexture; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::GameObject* objectContainer; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
