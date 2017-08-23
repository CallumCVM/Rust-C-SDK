#pragma once

#include "..\ProtoBuf\PlayerLifeStory.h"
#include "..\UnityEngine\GameObject.h"

namespace rust 
{
	class LifeInfographic : public MonoBehaviour // 0x18
	{
	public:
		ProtoBuf::PlayerLifeStory* life; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::GameObject* container; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
