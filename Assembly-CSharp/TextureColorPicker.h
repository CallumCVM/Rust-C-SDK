#pragma once

#include "..\UnityEngine\Texture2D.h"
#include "..\TextureColorPicker\onColorSelectedEvent.h"

namespace rust 
{
	class TextureColorPicker : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Texture2D* texture; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		TextureColorPicker::onColorSelectedEvent* onColorSelected; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
