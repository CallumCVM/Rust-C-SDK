#pragma once

#include "..\PathList\BasicObject.h"
#include "..\PathList\SideObject.h"
#include "..\PathList\PathObject.h"

namespace rust 
{
	class PlaceRiverObjects : public ProceduralComponent // 0x28
	{
	public:
		PathList::BasicObject* Start; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		PathList::BasicObject* End; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		PathList::SideObject* Side; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		PathList::PathObject* Path; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x48
}
