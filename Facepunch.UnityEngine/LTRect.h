#pragma once

#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\LTGUI\Element_Type.h"
#include "..\UnityEngine\GUIStyle.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Texture.h"

namespace rust 
{
	class LTRect : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* labelStr; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::GUIStyle* style; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture* texture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Rect _rect; // 0x28 (size: 0x10, flags: 0x6, type: 0x11)
		float alpha; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float rotation; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector2 pivot; // 0x40 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 margin; // 0x48 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Rect relativeRect; // 0x50 (size: 0x10, flags: 0x6, type: 0x11)
		bool rotateEnabled; // 0x60 (size: 0x1, flags: 0x6, type: 0x2)
		bool rotateFinished; // 0x61 (size: 0x1, flags: 0x6, type: 0x2)
		bool alphaEnabled; // 0x62 (size: 0x1, flags: 0x6, type: 0x2)
		LTGUI::Element_Type type; // 0x64 (size: 0x4, flags: 0x6, type: 0x11)
		bool useColor; // 0x68 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Color color; // 0x6c (size: 0x10, flags: 0x6, type: 0x11)
		bool fontScaleToFit; // 0x7c (size: 0x1, flags: 0x6, type: 0x2)
		bool useSimpleScale; // 0x7d (size: 0x1, flags: 0x6, type: 0x2)
		bool sizeByHeight; // 0x7e (size: 0x1, flags: 0x6, type: 0x2)
		int _id; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		int counter; // 0x84 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x88
}
