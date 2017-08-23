#pragma once

namespace System
{
	class NotFiniteNumberException : public ArithmeticException // 0x60
	{
	public:
		double offending_number; // 0x60 (size: 0x8, flags: 0x1, type: 0xd)
	}; // size = 0x68
}
