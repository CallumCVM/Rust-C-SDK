#pragma once

#include "..\Apex\LoadBalancing\LoadBalancerConfig.h"
#include "..\Apex\LoadBalancing\LoadBalancedQueue.h"
#include "..\Apex\LoadBalancing\Marshaller.h"

namespace Apex
{
	namespace LoadBalancing
{
	class LoadBalancerComponent : public SingleInstanceComponent`1 // 0x18
	{
	public:
		Apex::LoadBalancing::LoadBalancerConfig* _configurations; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		Apex::LoadBalancing::LoadBalancedQueue* _loadBalancers; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		Apex::LoadBalancing::Marshaller* _marshaller; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int _mashallerMaxMillisecondPerFrame; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
