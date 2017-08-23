#pragma once

#include "..\System\Action<BasePlayer>.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\AudioClip.h"
#include "..\UnityEngine\CanvasGroup.h"

namespace rust 
{
	class ProgressBar : public UIBehaviour // 0x18
	{
	public:
		System::Action<BasePlayer> action; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::GameObject* scaleTarget; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* progressField; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Image* iconField; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* leftField; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* rightField; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* clipOpen; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AudioClip* clipCancel; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* canvasGroup; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		float timeFinished; // 0x60 (size: 0x4, flags: 0x1, type: 0xc)
		float timeCounter; // 0x64 (size: 0x4, flags: 0x1, type: 0xc)
		bool isClosing; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool IsOpen; // 0x69 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x70
}
