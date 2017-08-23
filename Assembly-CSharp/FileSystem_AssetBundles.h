#pragma once

#include "..\UnityEngine\AssetBundle.h"
#include "..\UnityEngine\AssetBundleManifest.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class FileSystem_AssetBundles : public Object // 0x0
	{
	public:
		UnityEngine::AssetBundle* rootBundle; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::AssetBundleManifest* manifest; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine.AssetBundle> bundles; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine.AssetBundle> files; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* assetPath; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
