#pragma once

#include "..\UnityEngine\List.h"

namespace Facepunch
{
	template <typename T0>
	class ObjectPool : public Object // 0x0
	{
	public:
		UnityEngine::List<T>* list; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x18
}
