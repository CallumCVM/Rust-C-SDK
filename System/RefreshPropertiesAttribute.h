#pragma once

#include "..\System\ComponentModel\RefreshProperties.h"

namespace System
{
	namespace ComponentModel
{
	class RefreshPropertiesAttribute : public Attribute // 0x0
	{
	public:
		System::ComponentModel::RefreshProperties refresh; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
