#pragma once

#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\UI\Text.h"
#include "VendingMachine.h"
#include "..\UnityEngine\Sprite.h"
#include "..\UnityEngine\Renderer.h"
#include "..\UnityEngine\CanvasGroup.h"

namespace rust 
{
	class VendingMachineScreen : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::RawImage* largeIcon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* mainText; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* lowerText; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* centerText; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* smallIcon; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		VendingMachine* vendingMachine; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* outOfStockSprite; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Renderer* fadeoutMesh; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* screenCanvas; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Renderer* light1; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Renderer* light2; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		float imageCycleTime; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
		float nextImageTime; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		int currentImageIndex; // 0x78 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x80
}
