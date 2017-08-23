#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class AntiHackVolume : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Vector3 Center; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 Size; // 0x24 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
