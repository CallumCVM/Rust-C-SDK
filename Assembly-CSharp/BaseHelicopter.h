#pragma once

#include "..\BaseHelicopter\weakspot.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\GameObject.h"
#include "GameObjectRef.h"
#include "SoundDefinition.h"
#include "Sound.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\ParticleSystem.h"
#include "PatrolHelicopterAI.h"

namespace rust 
{
	class BaseHelicopter : public BaseCombatEntity // 0x1e8
	{
	public:
		BaseHelicopter::weakspot* weakspots; // 0x1e8 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* rotorPivot; // 0x1f0 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* mainRotor; // 0x1f8 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* mainRotor_blades; // 0x200 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* mainRotor_blur; // 0x208 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* tailRotor; // 0x210 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* tailRotor_blades; // 0x218 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* tailRotor_blur; // 0x220 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* rocket_tube_left; // 0x228 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* rocket_tube_right; // 0x230 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* left_gun_yaw; // 0x238 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* left_gun_pitch; // 0x240 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* left_gun_muzzle; // 0x248 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* right_gun_yaw; // 0x250 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* right_gun_pitch; // 0x258 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* right_gun_muzzle; // 0x260 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* spotlight_rotation; // 0x268 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* rocket_fire_effect; // 0x270 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* gun_fire_effect; // 0x278 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* bulletEffect; // 0x280 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* explosionEffect; // 0x288 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* fireBall; // 0x290 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* crateToDrop; // 0x298 (size: 0x8, flags: 0x6, type: 0x12)
		GameObjectRef* servergibs; // 0x2a0 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* rotorWashSoundDef; // 0x2a8 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* engineSoundDef; // 0x2b0 (size: 0x8, flags: 0x6, type: 0x12)
		SoundDefinition* rotorSoundDef; // 0x2b8 (size: 0x8, flags: 0x6, type: 0x12)
		Sound* _engineSound; // 0x2c0 (size: 0x8, flags: 0x1, type: 0x12)
		Sound* _rotorSound; // 0x2c8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* nightLights; // 0x2d0 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::ParticleSystem* _rotorWashParticles; // 0x2d8 (size: 0x8, flags: 0x6, type: 0x1d)
		PatrolHelicopterAI* myAI; // 0x2e0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Quaternion client_rotorPivotIdeal; // 0x2e8 (size: 0x10, flags: 0x1, type: 0x11)
		float lastNetworkUpdate; // 0x2f8 (size: 0x4, flags: 0x1, type: 0xc)
		int maxCratesToSpawn; // 0x2fc (size: 0x4, flags: 0x6, type: 0x8)
		float bulletSpeed; // 0x300 (size: 0x4, flags: 0x6, type: 0xc)
		float bulletDamage; // 0x304 (size: 0x4, flags: 0x6, type: 0xc)
		float spotlightJitterAmount; // 0x308 (size: 0x4, flags: 0x6, type: 0xc)
		float spotlightJitterSpeed; // 0x30c (size: 0x4, flags: 0x6, type: 0xc)
		bool nightLightsOn; // 0x310 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Vector3 spotlightTarget; // 0x314 (size: 0xc, flags: 0x6, type: 0x11)
		float engineSpeed; // 0x320 (size: 0x4, flags: 0x6, type: 0xc)
		float targetEngineSpeed; // 0x324 (size: 0x4, flags: 0x6, type: 0xc)
		float blur_rotationScale; // 0x328 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x330
}
