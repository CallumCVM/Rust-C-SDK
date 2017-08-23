#pragma once

#include "..\Apex\Debugging\LoadBalancerPerformanceVisualizer\PerformanceData.h"

namespace Apex
{
	namespace Debugging
{
	class LoadBalancerPerformanceVisualizer : public MonoBehaviour // 0x18
	{
	public:
		Apex::Debugging::LoadBalancerPerformanceVisualizer::PerformanceData* _data; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
