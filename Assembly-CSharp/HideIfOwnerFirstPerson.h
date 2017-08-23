#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\System\Collections\Generic\Dictionary<UnityEngine\Renderer,UnityEngine\Rendering\ShadowCastingMode>.h"

namespace rust 
{
	class HideIfOwnerFirstPerson : public EntityComponent`1 // 0x20
	{
	public:
		UnityEngine::GameObject* disableGameObjects; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Collections::Generic::Dictionary<UnityEngine::Renderer,UnityEngine::Rendering::ShadowCastingMode> previousValues; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		bool worldModelEffect; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool lastHidden; // 0x31 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x38
}
