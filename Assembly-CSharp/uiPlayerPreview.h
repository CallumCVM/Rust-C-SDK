#pragma once

#include "..\UnityEngine\Camera.h"
#include "PlayerModel.h"
#include "..\UnityEngine\ReflectionProbe.h"

namespace rust 
{
	class uiPlayerPreview : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::Camera* previewCamera; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		PlayerModel* playermodel; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::ReflectionProbe* reflectionProbe; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		PlayerModel* needsUpdateFrom; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x38
}
