#pragma once

namespace System
{
	namespace ComponentModel
{
	class DataObjectAttribute : public Attribute // 0x0
	{
	public:
		bool _isDataObject; // 0x10 (size: 0x1, flags: 0x21, type: 0x2)
	}; // size = 0x18
}
