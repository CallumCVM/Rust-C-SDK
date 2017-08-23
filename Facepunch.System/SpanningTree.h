#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
template <typename T0>
	class SpanningTree : public Object // 0x0
	{
	public:
		UnityEngine::List<SpanningTree.Node<T>>* nodes; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<SpanningTree.Edge<T>>* edges; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
