#pragma once

#include "..\Apex\LoadBalancing\LoadBalancedQueue.h"
#include "..\Apex\LoadBalancing\ILoadBalanced.h"

namespace rust 
{
	class LoadBalancerItem : public Object // 0x0
	{
	public:
		Apex::LoadBalancing::LoadBalancedQueue* parent; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		Apex::LoadBalancing::ILoadBalanced* <item>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool _isDisposed; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		float nextUpdate; // 0x24 (size: 0x4, flags: 0x3, type: 0xc)
		float lastUpdate; // 0x28 (size: 0x4, flags: 0x3, type: 0xc)
		float interval; // 0x2c (size: 0x4, flags: 0x3, type: 0xc)
	}; // size = 0x30
}
