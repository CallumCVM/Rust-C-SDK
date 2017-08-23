#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Apex\LoadBalancing\LoadBalancedQueue.h"

namespace Apex
{
	namespace LoadBalancing
{
	class LoadBalancerConfig : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* targetLoadBalancer; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		Apex::LoadBalancing::LoadBalancedQueue* <associatedLoadBalancer>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		float updateInterval; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		int maxUpdatesPerFrame; // 0x24 (size: 0x4, flags: 0x6, type: 0x8)
		int maxUpdateTimeInMillisecondsPerUpdate; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		bool autoAdjust; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
