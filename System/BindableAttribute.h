#pragma once

#include "..\System\ComponentModel\BindingDirection.h"

namespace System
{
	namespace ComponentModel
{
	class BindableAttribute : public Attribute // 0x0
	{
	public:
		bool bindable; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		System::ComponentModel::BindingDirection direction; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
