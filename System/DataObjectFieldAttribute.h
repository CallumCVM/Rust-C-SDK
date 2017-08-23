#pragma once

namespace System
{
	namespace ComponentModel
{
	class DataObjectFieldAttribute : public Attribute // 0x0
	{
	public:
		bool primary_key; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_identity; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_nullable; // 0x12 (size: 0x1, flags: 0x1, type: 0x2)
		int length; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x18
}
