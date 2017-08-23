#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\GameObject.h"
#include "ItemDefinition.h"

namespace rust 
{
	class CraftingQueueIcon : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::CanvasGroup* canvasGroup; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* icon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* timeLeft; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* craftingCount; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		ItemDefinition* item; // 0x38 (size: 0x8, flags: 0x86, type: 0x12)
		int taskid; // 0x40 (size: 0x4, flags: 0x86, type: 0x8)
		float endTime; // 0x44 (size: 0x4, flags: 0x86, type: 0xc)
		int amount; // 0x48 (size: 0x4, flags: 0x86, type: 0x8)
	}; // size = 0x50
}
