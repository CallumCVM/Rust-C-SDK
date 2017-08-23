#pragma once

#include "SoundDefinition.h"
#include "..\UnityEngine\List.h"
#include "Sound.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Bounds.h"
#include "..\SoundModulation\Modulator.h"

namespace rust 
{
	class SurfaceSound : public Object // 0x0
	{
	public:
		SoundDefinition* soundDef; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<UnityEngine.PhysicMaterial>* materials; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		Sound* sound; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<UnityEngine.Vector3>* points; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		SoundModulation::Modulator* gainMod; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		SoundModulation::Modulator* spreadMod; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		float amount; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 position; // 0x44 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Bounds bounds; // 0x50 (size: 0x18, flags: 0x6, type: 0x11)
	}; // size = 0x68
}
