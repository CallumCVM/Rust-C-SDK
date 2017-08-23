#pragma once

#include "..\System\Collections\IDictionaryEnumerator.h"
#include "..\System\Collections\IEnumerable.h"

namespace rust 
{
	class XmlSchemaObjectTableEnumerator : public Object // 0x0
	{
	public:
		System::Collections::IDictionaryEnumerator* xenum; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEnumerable* tmp; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
