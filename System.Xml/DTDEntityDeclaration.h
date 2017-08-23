#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"

namespace Mono
{
	namespace Xml
{
	class DTDEntityDeclaration : public DTDEntityBase // 0x78
	{
	public:
		UnityEngine::UnicodeString* entityValue; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* notationName; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* ReferencingEntities; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		bool scanned; // 0x90 (size: 0x1, flags: 0x1, type: 0x2)
		bool recursed; // 0x91 (size: 0x1, flags: 0x1, type: 0x2)
		bool hasExternalReference; // 0x92 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x98
}
