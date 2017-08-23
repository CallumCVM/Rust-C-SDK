#pragma once

#include "..\Apex\LoadBalancing\LoadBalancedQueue.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class PerformanceData : public Object // 0x0
	{
	public:
		Apex::LoadBalancing::LoadBalancedQueue* _source; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <loadBalancerName>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		__int64 _updateCount; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		float _summedUpdatesOverdueAverage; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		float _summedUpdateMillisecondsUsed; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float _summedUpdatedItemsCount; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
