#pragma once

#include "..\System\Func<System\Collections\IEnumerator>.h"
#include "..\System\Action.h"
#include "..\System\Collections\IEnumerator.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace Apex
{
	namespace LoadBalancing
{
	class LongRunningAction : public Object // 0x0
	{
	public:
		System::Func<System::Collections::IEnumerator> _action; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action* _callback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEnumerator* _iter; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Stopwatch* _watch; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int _maxMillisecondUsedPerFrame; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		bool <repeat>k__BackingField; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
