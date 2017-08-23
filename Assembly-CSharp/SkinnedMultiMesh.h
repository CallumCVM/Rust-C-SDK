#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\MaterialPropertyBlock.h"
#include "SkinSetCollection.h"
#include "OptimizeAnimator.h"
#include "..\UnityEngine\LODGroup.h"

namespace rust 
{
	class SkinnedMultiMesh : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<SkinnedMultiMesh.Part>* parts; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine.Transform> boneDict; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<SkinnedMultiMesh.Part>* createdParts; // 0x28 (size: 0x8, flags: 0x86, type: 0x15)
		UnityEngine::MaterialPropertyBlock* sharedBlockProperty; // 0x30 (size: 0x8, flags: 0x86, type: 0x12)
		SkinSetCollection* SkinCollection; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		OptimizeAnimator* optimizeAnimator; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::LODGroup* lodGroup; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.Renderer>* renderers; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Animator>* animators; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		bool shadowOnly; // 0x60 (size: 0x1, flags: 0x6, type: 0x2)
		__int64 lastBuildHash; // 0x68 (size: 0x8, flags: 0x86, type: 0xa)
		float skinNumber; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		float meshNumber; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		int skinType; // 0x78 (size: 0x4, flags: 0x6, type: 0x8)
		bool IsVisible; // 0x7c (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x80
}
