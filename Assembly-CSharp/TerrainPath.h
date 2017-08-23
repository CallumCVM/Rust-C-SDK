#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class TerrainPath : public TerrainExtension // 0x30
	{
	public:
		UnityEngine::List<PathList>* Roads; // 0x30 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::List<PathList>* Bridges; // 0x38 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::List<PathList>* Rivers; // 0x40 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::List<PathList>* Powerlines; // 0x48 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::List<MonumentInfo>* Monuments; // 0x50 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::List<RiverInfo>* RiverObjs; // 0x58 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::List<LakeInfo>* LakeObjs; // 0x60 (size: 0x8, flags: 0x3, type: 0x15)
		System.Collections.Generic.Dictionary<InfrastructureType,UnityEngine::List<TerrainPathConnect>>* targets; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine::List<PowerlineNode>>* wires; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x78
}
