#pragma once

#include "..\System\Configuration\ConfigurationValidatorBase.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationElementProperty : public Object // 0x0
	{
	public:
		System::Configuration::ConfigurationValidatorBase* validator; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
