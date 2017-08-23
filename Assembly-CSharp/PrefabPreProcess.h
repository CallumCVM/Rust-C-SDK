#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class PrefabPreProcess : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,UnityEngine.GameObject> prefabList; // 0x10 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::List<UnityEngine.Component>* destroyList; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.GameObject>* cleanupList; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		bool isClientside; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool isServerside; // 0x29 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
