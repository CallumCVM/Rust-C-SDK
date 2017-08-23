#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Bounds.h"

namespace Rust
{
	namespace Ai
{
	class NavMeshGridCell : public FacepunchBehaviour // 0x18
	{
	public:
		UnityEngine::List<Rust.Ai.NavMeshGridCell.Layer>* layers; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::List<UnityEngine.AI.NavMeshBuildSource>* sources; // 0x20 (size: 0x8, flags: 0x21, type: 0x15)
		UnityEngine::List<UnityEngine.AI.NavMeshBuildMarkup>* markups; // 0x28 (size: 0x8, flags: 0x21, type: 0x15)
		float TimeLastSeenByPlayer; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Bounds Bounds; // 0x34 (size: 0x18, flags: 0x6, type: 0x11)
	}; // size = 0x50
}
