#pragma once

#include "..\Apex\DataStructures\BinaryHeap<Apex\LoadBalancing\LoadBalancedQueue\LoadBalancerItem>.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace Apex
{
	namespace LoadBalancing
{
	class LoadBalancedQueue : public Object // 0x0
	{
	public:
		Apex::DataStructures::BinaryHeap<Apex::LoadBalancing::LoadBalancedQueue::LoadBalancerItem> _queue; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Diagnostics::Stopwatch* _watch; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		float <defaultUpdateInterval>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
		int <maxUpdatesPerInterval>k__BackingField; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int <maxUpdateTimeInMillisecondsPerUpdate>k__BackingField; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		bool <autoAdjust>k__BackingField; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
		float <updatesOverdueByTotal>k__BackingField; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		__int64 <updateMillisecondsUsed>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xa)
		int <updatedItemsCount>k__BackingField; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
