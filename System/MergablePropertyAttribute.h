#pragma once

namespace System
{
	namespace ComponentModel
{
	class MergablePropertyAttribute : public Attribute // 0x0
	{
	public:
		bool mergable; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
