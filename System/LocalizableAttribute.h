#pragma once

namespace System
{
	namespace ComponentModel
{
	class LocalizableAttribute : public Attribute // 0x0
	{
	public:
		bool localizable; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
