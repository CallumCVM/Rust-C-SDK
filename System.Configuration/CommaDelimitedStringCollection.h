#pragma once

namespace System
{
	namespace Configuration
{
	class CommaDelimitedStringCollection : public StringCollection // 0x18
	{
	public:
		bool modified; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool readOnly; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
