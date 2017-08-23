#pragma once

#include "T.h"

namespace UnityEngine
{
	template <typename T0>
	class CastHelper : public ValueType // 0x0
	{
	public:
		T t; // 0x10 (size: 0x8, flags: 0x6, type: 0x13)
		__int64 onePointerFurtherThanT; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x20
}
