#pragma once

#include "..\System\Collections\IDictionary.h"

namespace System
{
	namespace CodeDom
{
	class CodeObject : public Object // 0x0
	{
	public:
		System::Collections::IDictionary* userData; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
