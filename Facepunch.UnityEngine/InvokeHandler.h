#pragma once

#include "ListHashSet<InvokeAction>.h"

namespace rust 
{
	class InvokeHandler : public SingletonComponent`1 // 0x18
	{
	public:
		ListDictionary<InvokeAction,float> curList; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		ListHashSet<InvokeAction> addList; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		ListHashSet<InvokeAction> delList; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		int nullIndex; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
