#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class WorldData : public Object // 0x0
	{
	public:
		UnityEngine::List<WorldSerialization.MapData>* maps; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<WorldSerialization.PrefabData>* prefabs; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<WorldSerialization.PathData>* paths; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		unsigned int version; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x30
}
