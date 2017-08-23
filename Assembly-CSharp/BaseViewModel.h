#pragma once

#include "..\UnityEngine\Animator.h"
#include "AnimationEvents.h"
#include "IronSights.h"
#include "ViewmodelSway.h"
#include "ViewmodelLower.h"
#include "ViewmodelBob.h"
#include "LazyAimProperties.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\GameObject.h"
#include "SubsurfaceProfile.h"

namespace rust 
{
	class BaseViewModel : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* animator; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		AnimationEvents* animationEvent; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		IronSights* ironSights; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ViewmodelSway* sway; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		ViewmodelLower* lower; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		ViewmodelBob* bob; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		LazyAimProperties* lazyaimRegular; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		LazyAimProperties* lazyaimIronsights; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* pivot; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* hideSightMeshes; // 0x60 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Transform* MuzzlePoint; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		SubsurfaceProfile* subsurfaceProfile; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		bool wantsHeldItemFlags; // 0x78 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x80
}
