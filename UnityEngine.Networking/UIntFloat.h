#pragma once

namespace UnityEngine
{
	namespace Networking
{
	class UIntFloat : public ValueType // 0x0
	{
	public:
		float floatValue; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		unsigned int intValue; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		double doubleValue; // 0x10 (size: 0x8, flags: 0x6, type: 0xd)
		unsigned __int64 longValue; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x18
}
