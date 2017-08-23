#pragma once

#include "..\UnityEngine\Font.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\FontStyle.h"
#include "..\UnityEngine\TextAnchor.h"
#include "..\UnityEngine\VerticalWrapMode.h"
#include "..\UnityEngine\HorizontalWrapMode.h"
#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	class TextGenerationSettings : public ValueType // 0x0
	{
	public:
		UnityEngine::Font* font; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color color; // 0x18 (size: 0x10, flags: 0x6, type: 0x11)
		int fontSize; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		float lineSpacing; // 0x2c (size: 0x4, flags: 0x6, type: 0xc)
		bool richText; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		float scaleFactor; // 0x34 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::FontStyle fontStyle; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::TextAnchor textAnchor; // 0x3c (size: 0x4, flags: 0x6, type: 0x11)
		bool alignByGeometry; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		bool resizeTextForBestFit; // 0x41 (size: 0x1, flags: 0x6, type: 0x2)
		int resizeTextMinSize; // 0x44 (size: 0x4, flags: 0x6, type: 0x8)
		int resizeTextMaxSize; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
		bool updateBounds; // 0x4c (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::VerticalWrapMode verticalOverflow; // 0x50 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::HorizontalWrapMode horizontalOverflow; // 0x54 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 generationExtents; // 0x58 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 pivot; // 0x60 (size: 0x8, flags: 0x6, type: 0x11)
		bool generateOutOfBounds; // 0x68 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x70
}
