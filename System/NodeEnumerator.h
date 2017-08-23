#pragma once

#include "..\System\Collections\Generic\RBTree.h"
#include "..\System\Collections\Generic\Stack<System\Collections\Generic\RBTree\Node>.h"

namespace rust 
{
	class NodeEnumerator : public ValueType // 0x0
	{
	public:
		System::Collections::Generic::RBTree* tree; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned int version; // 0x18 (size: 0x4, flags: 0x1, type: 0x9)
		System::Collections::Generic::Stack<System::Collections::Generic::RBTree::Node> pennants; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
