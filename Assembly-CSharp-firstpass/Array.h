#pragma once

#include "..\UnityEngine\List.h"

namespace JSON
{
	class Array : public Object // 0x0
	{
	public:
		UnityEngine::List<JSON.Value>* values; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x18
}
