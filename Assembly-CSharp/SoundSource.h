#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\List.h"
#include "LODCell.h"
#include "..\UnityEngine\Ray.h"

namespace rust 
{
	class SoundSource : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<SoundSource.OcclusionPoint>* occlusionPoints; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		LODCell* cell; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<UnityEngine.RaycastHit>* hits; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		bool handleOcclusionChecks; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::LayerMask occlusionLayerMask; // 0x34 (size: 0x4, flags: 0x6, type: 0x11)
		bool isOccluded; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
		float occlusionAmount; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float lodDistance; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		bool inRange; // 0x44 (size: 0x1, flags: 0x6, type: 0x2)
		bool wasInRange; // 0x45 (size: 0x1, flags: 0x1, type: 0x2)
		float lastOcclusionCheck; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
		float occlusionCheckInterval; // 0x4c (size: 0x4, flags: 0x1, type: 0xc)
		int lastOcclusionPointIdx; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Ray ray; // 0x54 (size: 0x18, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
