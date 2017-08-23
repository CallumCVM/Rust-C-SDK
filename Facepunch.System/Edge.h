#pragma once

#include "..\SpanningTree\Node<T>.h"
#include "T.h"
#include "..\SpanningTree\Edge<T>.h"

namespace rust 
{
	class Edge : public Object // 0x0
	{
	public:
		SpanningTree::Node<T> source; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		SpanningTree::Node<T> target; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		T value; // 0x20 (size: 0x8, flags: 0x6, type: 0x13)
		SpanningTree::Edge<T> <child>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		int <order>k__BackingField; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
