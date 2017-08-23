#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class CullingManager : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::List<CullingVolume>* volumes; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
