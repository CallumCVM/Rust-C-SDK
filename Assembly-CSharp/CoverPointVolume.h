#pragma once

#include "BaseEntity.h"
#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\HashSet<UnityEngine\Vector3>.h"
#include "PlayerEyes.h"

namespace Rust
{
	namespace Ai
{
	class CoverPointVolume : public MonoBehaviour // 0x18
	{
	public:
		BaseEntity* SampleCharacterSizePrefab; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* BlockerGroup; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Rust.Ai.CoverPoint>* CoverPoints; // 0x28 (size: 0x8, flags: 0x26, type: 0x15)
		System::Collections::Generic::HashSet<UnityEngine::Vector3> _sampledPoints; // 0x30 (size: 0x8, flags: 0x21, type: 0x15)
		PlayerEyes* _eyes; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<Rust.Ai.CoverPointBlockerVolume>* _coverPointBlockers; // 0x40 (size: 0x8, flags: 0x21, type: 0x15)
		float* tempVisRange; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		float DefaultCoverPointScore; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float MinDistanceBetweenCoverPoints; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float SampleStepSize; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float CoverPointRayLength; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::LayerMask CoverLayerMask; // 0x60 (size: 0x4, flags: 0x6, type: 0x11)
		float _dynNavMeshBuildCompletionTime; // 0x64 (size: 0x4, flags: 0x1, type: 0xc)
		int _genAttempts; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
