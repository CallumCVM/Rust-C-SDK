#pragma once

#include "..\System\Char.h"
#include "..\System\IFormatProvider.h"

namespace System
{
	namespace IO
{
	class TextWriter : public MarshalByRefObject // 0x18
	{
	public:
		System::Char* CoreNewLine; // 0x18 (size: 0x8, flags: 0x4, type: 0x1d)
		System::IFormatProvider* internalFormatProvider; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
