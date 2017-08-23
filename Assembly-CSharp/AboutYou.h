#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"

namespace rust 
{
	class AboutYou : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* username; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* avatar; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* subtitle; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
