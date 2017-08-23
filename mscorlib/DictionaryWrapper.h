#pragma once

#include "..\System\Collections\IDictionary.h"

namespace rust 
{
	class DictionaryWrapper : public MethodReturnDictionary // 0x30
	{
	public:
		System::Collections::IDictionary* _wrappedDictionary; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
