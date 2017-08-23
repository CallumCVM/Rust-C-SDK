#pragma once

#include "..\UnityEngine\List.h"

namespace rust 
{
	class Checksum : public Object // 0x0
	{
	public:
		UnityEngine::List<unsigned char>* values; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
