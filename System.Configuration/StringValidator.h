#pragma once

#include "..\System\Char.h"

namespace System
{
	namespace Configuration
{
	class StringValidator : public ConfigurationValidatorBase // 0x0
	{
	public:
		System::Char* invalidCharacters; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int maxLength; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int minLength; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
