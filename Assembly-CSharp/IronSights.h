#pragma once

#include "IronsightAimPoint.h"
#include "..\UnityEngine\AnimationCurve.h"
#include "SoundDefinition.h"
#include "IronSightOverride.h"
#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"

namespace rust 
{
	class IronSights : public MonoBehaviour // 0x18
	{
	public:
		IronsightAimPoint* aimPoint; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* introCurve; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::AnimationCurve* outroCurve; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* upSound; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* downSound; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		IronSightOverride* ironsightsOverride; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Animator* animator; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::AnimationCurve* currentCurve; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool Enabled; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		float fieldOfViewOffset; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		float introSpeed; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		float outroSpeed; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		int param_ironsightstrength; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int param_ironsightsEnabled; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		float delta; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
		float rawDelta; // 0x74 (size: 0x4, flags: 0x1, type: 0xc)
		float maxDelta; // 0x78 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 positionOffset; // 0x7c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion rotationOffset; // 0x88 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x98
}
