#pragma once

namespace System
{
	namespace Reflection
{
	class MonoEvent : public EventInfo // 0x18
	{
	public:
		__int64 klass; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 handle; // 0x20 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x28
}
