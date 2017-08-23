#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace ComponentModel
{
	class LicenseException : public SystemException // 0x60
	{
	public:
		System::Type* type; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
