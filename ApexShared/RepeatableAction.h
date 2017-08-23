#pragma once

namespace Apex
{
	namespace LoadBalancing
{
	class RepeatableAction : public Object // 0x0
	{
	public:
		System.Func<float,bool> _action; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		int _repetitions; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _repetitionCount; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		bool <repeat>k__BackingField; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
