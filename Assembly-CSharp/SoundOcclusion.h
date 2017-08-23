#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "Sound.h"
#include "OnePoleLowpassFilter.h"
#include "..\SoundModulation\Modulator.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Ray.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class SoundOcclusion : public MonoBehaviour // 0x18
	{
	public:
		Sound* sound; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		OnePoleLowpassFilter* lowpass; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		SoundModulation::Modulator* gainMod; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.RaycastHit>* hits; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::LayerMask occlusionLayerMask; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		bool <isOccluded>k__BackingField; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
		float occlusionAmount; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 soundOffset; // 0x44 (size: 0xc, flags: 0x1, type: 0x11)
		float lastOcclusionCheck; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
		float occlusionCheckInterval; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Ray ray; // 0x58 (size: 0x18, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
