#pragma once

#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\FilterMode.h"
#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class UIPaintableImage : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::RawImage* image; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* texture; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		int texSize; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Color clearColor; // 0x2c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::FilterMode filterMode; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
		bool mipmaps; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		int imageNumber; // 0x44 (size: 0x4, flags: 0x86, type: 0x8)
		unsigned int imageHash; // 0x48 (size: 0x4, flags: 0x86, type: 0x9)
		bool isLocked; // 0x4c (size: 0x1, flags: 0x86, type: 0x2)
		bool isLoading; // 0x4d (size: 0x1, flags: 0x86, type: 0x2)
		bool isBlank; // 0x4e (size: 0x1, flags: 0x86, type: 0x2)
		bool needsApply; // 0x4f (size: 0x1, flags: 0x86, type: 0x2)
	}; // size = 0x50
}
