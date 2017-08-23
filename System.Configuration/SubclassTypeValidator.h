#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace Configuration
{
	class SubclassTypeValidator : public ConfigurationValidatorBase // 0x0
	{
	public:
		System::Type* baseClass; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
