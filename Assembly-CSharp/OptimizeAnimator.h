#pragma once

#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Vector3.h"
#include "..\System\Collections\Generic\HashSet<UnityEngine\SkinnedMeshRenderer>.h"

namespace rust 
{
	class OptimizeAnimator : public ArticulatedOccludee // 0x60
	{
	public:
		UnityEngine::Transform* followBone; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		System::Collections::Generic::HashSet<UnityEngine::SkinnedMeshRenderer> rendererSet; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Bounds fixedLocalBounds; // 0x70 (size: 0x18, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 followBoneOffset; // 0x88 (size: 0xc, flags: 0x6, type: 0x11)
		bool optimizeOnStart; // 0x94 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x98
}
