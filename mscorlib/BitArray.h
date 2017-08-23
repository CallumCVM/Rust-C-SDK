#pragma once

namespace System
{
	namespace Collections
{
	class BitArray : public Object // 0x0
	{
	public:
		int* m_array; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int m_length; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _version; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
