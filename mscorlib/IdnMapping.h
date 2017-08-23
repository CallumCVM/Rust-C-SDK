#pragma once

#include "..\System\Globalization\Punycode.h"

namespace System
{
	namespace Globalization
{
	class IdnMapping : public Object // 0x0
	{
	public:
		bool allow_unassigned; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool use_std3; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		System::Globalization::Punycode* puny; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
