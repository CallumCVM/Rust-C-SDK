#pragma once

#include "..\PathList\BridgeObject.h"

namespace rust 
{
	class PlaceBridgeObjects : public ProceduralComponent // 0x28
	{
	public:
		PathList::BridgeObject* Bridge; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x30
}
