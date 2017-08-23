#pragma once

#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\ScrollRectEx.h"
#include "PaintableImageGrid.h"
#include "UIPaintBox.h"
#include "NeedsCursor.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class MapInterface : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::UI::RawImage* mapImage; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* cameraPositon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::ScrollRectEx* scrollRect; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		PaintableImageGrid* paintGrid; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UIPaintBox* paintBox; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		NeedsCursor* needsCursor; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* monumentMarkerContainer; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* monumentMarkerPrefab; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		bool followingPlayer; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		bool waitingForMouseUp; // 0x59 (size: 0x1, flags: 0x3, type: 0x2)
		float nextSave; // 0x5c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x60
}
