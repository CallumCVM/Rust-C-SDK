#pragma once

#include "..\PathFinder\Point.h"
#include "..\PathFinder\Node.h"

namespace rust 
{
	class Node : public Object // 0x0
	{
	public:
		PathFinder::Node* <next>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		PathFinder::Node* <child>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		PathFinder::Point point; // 0x20 (size: 0x8, flags: 0x6, type: 0x11)
		int cost; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int heuristic; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
