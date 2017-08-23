#pragma once

namespace System
{
	namespace Diagnostics
{
	class Stopwatch : public Object // 0x0
	{
	public:
		__int64 elapsed; // 0x10 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 started; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
		bool is_running; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
