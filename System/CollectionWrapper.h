#pragma once

#include "..\System\Collections\IDictionary.h"
#include "..\System\Collections\Specialized\NameValueCollection.h"

namespace rust 
{
	class CollectionWrapper : public Object // 0x0
	{
	public:
		System::Collections::IDictionary* dict; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::NameValueCollection* collection; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool isDict; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
