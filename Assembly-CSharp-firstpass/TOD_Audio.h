#pragma once

#include "..\UnityEngine\AudioSource.h"

namespace rust 
{
	class TOD_Audio : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::AudioSource* audioComponent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
