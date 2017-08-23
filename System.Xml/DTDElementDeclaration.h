#pragma once

#include "..\Mono\Xml\DTDObjectModel.h"
#include "..\Mono\Xml\DTDContentModel.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
	class DTDElementDeclaration : public DTDNode // 0x30
	{
	public:
		Mono::Xml::DTDObjectModel* root; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDContentModel* contentModel; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		bool isEmpty; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool isAny; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
		bool isMixedContent; // 0x4a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
