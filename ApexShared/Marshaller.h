#pragma once

#include "..\System\Diagnostics\Stopwatch.h"
#include "..\Apex\DataStructures\SimpleQueue<System\Action>.h"

namespace Apex
{
	namespace LoadBalancing
{
	class Marshaller : public Object // 0x0
	{
	public:
		System::Diagnostics::Stopwatch* _watch; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		Apex::DataStructures::SimpleQueue<System::Action> _queue; // 0x18 (size: 0x8, flags: 0x21, type: 0x15)
		int _maxMillisecondsPerFrame; // 0x20 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x28
}
