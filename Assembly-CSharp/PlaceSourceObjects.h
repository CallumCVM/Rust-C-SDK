#pragma once

#include "..\PathList\BasicObject.h"

namespace rust 
{
	class PlaceSourceObjects : public ProceduralComponent // 0x28
	{
	public:
		PathList::BasicObject* Start; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		PathList::BasicObject* End; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
