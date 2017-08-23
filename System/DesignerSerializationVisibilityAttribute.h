#pragma once

#include "..\System\ComponentModel\DesignerSerializationVisibility.h"

namespace System
{
	namespace ComponentModel
{
	class DesignerSerializationVisibilityAttribute : public Attribute // 0x0
	{
	public:
		System::ComponentModel::DesignerSerializationVisibility visibility; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
