#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Collections
{
	class DictionaryEntry : public ValueType // 0x0
	{
	public:
		System::Object _key; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object _value; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x20
}
