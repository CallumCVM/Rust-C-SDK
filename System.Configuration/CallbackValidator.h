#pragma once

#include "..\System\Type.h"
#include "..\System\Configuration\ValidatorCallback.h"

namespace System
{
	namespace Configuration
{
	class CallbackValidator : public ConfigurationValidatorBase // 0x0
	{
	public:
		System::Type* type; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ValidatorCallback* callback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
