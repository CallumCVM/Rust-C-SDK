#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Color.h"
#include "..\TerrainAtlasSet\SourceMapSet.h"

namespace rust 
{
	class TerrainAtlasSet : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::UnicodeString** splatNames; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		bool* albedoHighpass; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** albedoPaths; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Color* defaultValues; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		TerrainAtlasSet::SourceMapSet* sourceMaps; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* splatSearchPrefix; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* splatSearchFolder; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* splatAtlasSavePath; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* normalAtlasSavePath; // 0x58 (size: 0x8, flags: 0x6, type: 0xe)
		bool generateTextureAtlases; // 0x60 (size: 0x1, flags: 0x6, type: 0x2)
		bool generateTextureArrays; // 0x61 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x68
}
