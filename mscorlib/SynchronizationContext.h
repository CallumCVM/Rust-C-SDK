#pragma once

namespace System
{
	namespace Threading
{
	class SynchronizationContext : public Object // 0x0
	{
	public:
		bool notification_required; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
