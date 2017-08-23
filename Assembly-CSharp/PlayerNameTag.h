#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\Gradient.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class PlayerNameTag : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::CanvasGroup* canvasGroup; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* text; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Gradient* color; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* parentBone; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* lastName; // 0x38 (size: 0x8, flags: 0x3, type: 0xe)
		float minDistance; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float maxDistance; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 positionOffset; // 0x48 (size: 0xc, flags: 0x6, type: 0x11)
		float distanceFromCamera; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x58
}
