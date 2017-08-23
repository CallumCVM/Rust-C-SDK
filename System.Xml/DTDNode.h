#pragma once

#include "..\Mono\Xml\DTDObjectModel.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
	class DTDNode : public Object // 0x0
	{
	public:
		Mono::Xml::DTDObjectModel* root; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* baseURI; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool isInternalSubset; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int lineNumber; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int linePosition; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
