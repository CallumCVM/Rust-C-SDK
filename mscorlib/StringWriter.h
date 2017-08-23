#pragma once

#include "..\System\Text\StringBuilder.h"

namespace System
{
	namespace IO
{
	class StringWriter : public TextWriter // 0x28
	{
	public:
		System::Text::StringBuilder* internalString; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool disposed; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
