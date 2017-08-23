#pragma once

#include "..\System\ComponentModel\InheritanceLevel.h"

namespace System
{
	namespace ComponentModel
{
	class InheritanceAttribute : public Attribute // 0x0
	{
	public:
		System::ComponentModel::InheritanceLevel level; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
