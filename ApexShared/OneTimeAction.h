#pragma once

namespace Apex
{
	namespace LoadBalancing
{
	class OneTimeAction : public Object // 0x0
	{
	public:
		System.Action<float> _action; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
