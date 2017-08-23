#pragma once

#include "..\System\Char.h"

namespace System
{
	namespace Globalization
{
	class Bootstring : public Object // 0x0
	{
	public:
		System::Char delimiter; // 0x10 (size: 0x2, flags: 0x21, type: 0x3)
		int base_num; // 0x14 (size: 0x4, flags: 0x21, type: 0x8)
		int tmin; // 0x18 (size: 0x4, flags: 0x21, type: 0x8)
		int tmax; // 0x1c (size: 0x4, flags: 0x21, type: 0x8)
		int skew; // 0x20 (size: 0x4, flags: 0x21, type: 0x8)
		int damp; // 0x24 (size: 0x4, flags: 0x21, type: 0x8)
		int initial_bias; // 0x28 (size: 0x4, flags: 0x21, type: 0x8)
		int initial_n; // 0x2c (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x30
}