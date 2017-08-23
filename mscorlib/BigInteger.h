#pragma once

namespace Mono
{
	namespace Math
{
	class BigInteger : public Object // 0x0
	{
	public:
		unsigned int length; // 0x10 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int* data; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
