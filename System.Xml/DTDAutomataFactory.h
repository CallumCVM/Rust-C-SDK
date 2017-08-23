#pragma once

#include "..\Mono\Xml\DTDObjectModel.h"
#include "..\System\Collections\Hashtable.h"

namespace Mono
{
	namespace Xml
{
	class DTDAutomataFactory : public Object // 0x0
	{
	public:
		Mono::Xml::DTDObjectModel* root; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* choiceTable; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* sequenceTable; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
