#pragma once

#include "PrefabPreProcess.h"
#include "PrefabPoolCollection.h"

namespace rust 
{
	class GameManager : public Object // 0x0
	{
	public:
		PrefabPreProcess* preProcessed; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		PrefabPoolCollection* pool; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		bool Clientside; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool Serverside; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
