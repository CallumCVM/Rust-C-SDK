#pragma once

#include "GameObjectRef.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\AudioSource.h"

namespace rust 
{
	class XMasRefill : public BaseEntity // 0x130
	{
	public:
		GameObjectRef* giftPrefabs; // 0x130 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::List<BasePlayer>* goodKids; // 0x138 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<Stocking>* stockings; // 0x140 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::AudioSource* bells; // 0x148 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x150
}
