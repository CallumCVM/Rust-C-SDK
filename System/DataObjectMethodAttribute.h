#pragma once

#include "..\System\ComponentModel\DataObjectMethodType.h"

namespace System
{
	namespace ComponentModel
{
	class DataObjectMethodAttribute : public Attribute // 0x0
	{
	public:
		System::ComponentModel::DataObjectMethodType _methodType; // 0x10 (size: 0x4, flags: 0x21, type: 0x11)
		bool _isDefault; // 0x14 (size: 0x1, flags: 0x21, type: 0x2)
	}; // size = 0x18
}
