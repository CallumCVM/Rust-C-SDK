#pragma once

#include "..\Apex\LoadBalancing\ILoadBalancedHandle.h"

namespace Apex
{
	namespace AI
{
{
		namespace Components
{
	class LoadBalancedUtilityAIClient : public UtilityAIClient // 0x30
	{
	public:
		Apex::LoadBalancing::ILoadBalancedHandle* _lbHandle; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		float <executionIntervalMin>k__BackingField; // 0x38 (size: 0x4, flags: 0x1, type: 0xc)
		float <executionIntervalMax>k__BackingField; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
		float <startDelayMin>k__BackingField; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		float <startDelayMax>k__BackingField; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x48
}
