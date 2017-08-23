#pragma once

#include "..\System\Configuration\SpecialSetting.h"

namespace System
{
	namespace Configuration
{
	class SpecialSettingAttribute : public Attribute // 0x0
	{
	public:
		System::Configuration::SpecialSetting setting; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
