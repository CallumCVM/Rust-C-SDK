#pragma once

#include "..\System\Decimal.h"

namespace UnityEngine
{
	namespace Networking
{
	class UIntDecimal : public ValueType // 0x0
	{
	public:
		unsigned __int64 longValue1; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		System::Decimal decimalValue; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		unsigned __int64 longValue2; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x20
}
