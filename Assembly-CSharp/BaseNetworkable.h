#pragma once

#include "..\UnityEngine\List.h"
#include "..\Network\Networkable.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class BaseNetworkable : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::List<BaseEntity>* children; // 0x18 (size: 0x8, flags: 0x86, type: 0x15)
		Network::Networkable* net; // 0x20 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::UnicodeString* _prefabName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _prefabNameWithoutExtension; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool <JustCreated>k__BackingField; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int prefabID; // 0x3c (size: 0x4, flags: 0x6, type: 0x9)
		bool globalBroadcast; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
		bool <IsDestroyed>k__BackingField; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
