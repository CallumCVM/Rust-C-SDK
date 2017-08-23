#pragma once

#include "..\System\Runtime\Remoting\Messaging\MethodDictionary.h"
#include "..\System\Collections\IDictionaryEnumerator.h"

namespace rust 
{
	class DictionaryEnumerator : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Messaging::MethodDictionary* _methodDictionary; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IDictionaryEnumerator* _hashtableEnum; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int _posMethod; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
