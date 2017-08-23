#pragma once

#include "..\Mono\Math\BigInteger.h"

namespace rust 
{
	class ModulusRing : public Object // 0x0
	{
	public:
		Mono::Math::BigInteger* mod; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* constant; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
