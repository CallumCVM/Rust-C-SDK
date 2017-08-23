#pragma once

#include "..\GameManifest\PooledString.h"
#include "..\GameManifest\MeshColliderInfo.h"
#include "..\GameManifest\PrefabProperties.h"
#include "..\GameManifest\EffectCategory.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class GameManifest : public ScriptableObject // 0x18
	{
	public:
		GameManifest::PooledString* pooledStrings; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		GameManifest::MeshColliderInfo* meshColliders; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		GameManifest::PrefabProperties* prefabProperties; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		GameManifest::EffectCategory* effectCategories; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** skinnables; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** entities; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x48
}
