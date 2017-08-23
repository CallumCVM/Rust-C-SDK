#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\BoxCollider.h"
#include "..\UnityEngine\GameObject.h"
#include "SkeletonScale.h"
#include "EyeController.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\RuntimeAnimatorController.h"
#include "SkinSetCollection.h"
#include "SubsurfaceProfile.h"
#include "ModelState.h"
#include "..\UnityEngine\Quaternion.h"
#include "PlayerNameTag.h"
#include "SkinnedMultiMesh.h"
#include "..\UnityEngine\Animator.h"
#include "..\UnityEngine\LODGroup.h"
#include "HeldEntity.h"

namespace rust 
{
	class PlayerModel : public ListComponent`1 // 0x18
	{
	public:
		UnityEngine::BoxCollider* collision; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* censorshipCube; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* censorshipCubeBreasts; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* jawBone; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* neckBone; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* headBone; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		SkeletonScale* skeletonScale; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		EyeController* eyeController; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* SpineBones; // 0x58 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::RuntimeAnimatorController* DefaultHoldType; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RuntimeAnimatorController* SleepGesture; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RuntimeAnimatorController* WoundedGesture; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::RuntimeAnimatorController* CurrentGesture; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		SkinSetCollection* MaleSkin; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		SkinSetCollection* FemaleSkin; // 0x88 (size: 0x8, flags: 0x6, type: 0x12)
		SubsurfaceProfile* subsurfaceProfile; // 0x90 (size: 0x8, flags: 0x6, type: 0x12)
		ModelState* modelState; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		PlayerNameTag* nameTag; // 0xa0 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::RuntimeAnimatorController* defaultAnimatorController; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		SkinnedMultiMesh* _multiMesh; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Animator* _animator; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::LODGroup* _lodGroup; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RuntimeAnimatorController* _currentGesture; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		HeldEntity* WorkshopHeldEntity; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		float _smoothAimWeight; // 0xd8 (size: 0x4, flags: 0x1, type: 0xc)
		float _smoothVelocity; // 0xdc (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 _smoothlookAngle; // 0xe0 (size: 0xc, flags: 0x1, type: 0x11)
		float voiceVolume; // 0xec (size: 0x4, flags: 0x6, type: 0xc)
		float skinColor; // 0xf0 (size: 0x4, flags: 0x6, type: 0xc)
		float skinNumber; // 0xf4 (size: 0x4, flags: 0x6, type: 0xc)
		float meshNumber; // 0xf8 (size: 0x4, flags: 0x6, type: 0xc)
		int skinType; // 0xfc (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Vector3 velocity; // 0x100 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 speedOverride; // 0x10c (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 position; // 0x118 (size: 0xc, flags: 0x3, type: 0x11)
		UnityEngine::Vector3 lastPosition; // 0x124 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x130 (size: 0x10, flags: 0x3, type: 0x11)
		bool drawShadowOnly; // 0x140 (size: 0x1, flags: 0x3, type: 0x2)
		bool isIncapacitated; // 0x141 (size: 0x1, flags: 0x3, type: 0x2)
		unsigned int flinchLocation; // 0x144 (size: 0x4, flags: 0x3, type: 0x9)
		bool visible; // 0x148 (size: 0x1, flags: 0x3, type: 0x2)
		bool animatorNeedsWarmup; // 0x149 (size: 0x1, flags: 0x1, type: 0x2)
		bool isLocalPlayer; // 0x14a (size: 0x1, flags: 0x3, type: 0x2)
		bool InGesture; // 0x14b (size: 0x1, flags: 0x1, type: 0x2)
		float holdTypeLock; // 0x14c (size: 0x4, flags: 0x1, type: 0xc)
		bool showSash; // 0x150 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Quaternion <LookAngles>k__BackingField; // 0x154 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x168
}
