#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\ArrayList.h"

namespace Mono
{
	namespace Xml
{
	class DTDAttListDeclaration : public DTDNode // 0x30
	{
	public:
		UnityEngine::UnicodeString* name; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Hashtable* attributeOrders; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* attributes; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
