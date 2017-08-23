#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\InputField.h"
#include "..\UnityEngine\UI\ScrollRect.h"
#include "..\UnityEngine\CanvasGroup.h"
#include "GameObjectRef.h"

namespace rust 
{
	class UIChat : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::GameObject* inputArea; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* chatArea; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* inputField; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::ScrollRect* scrollRect; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::CanvasGroup* canvasGroup; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* chatItemPlayer; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x48
}
