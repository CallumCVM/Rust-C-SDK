#pragma once

#include "..\Mono\Xml\DTDObjectModel.h"
#include "..\Mono\Xml\DTDAutomata.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Xml\DTDContentOrderType.h"
#include "..\Mono\Xml\DTDContentModelCollection.h"
#include "..\Mono\Xml\DTDOccurence.h"

namespace Mono
{
	namespace Xml
{
	class DTDContentModel : public DTDNode // 0x30
	{
	public:
		Mono::Xml::DTDObjectModel* root; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDAutomata* compiledAutomata; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* ownerElementName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* elementName; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::DTDContentModelCollection* childModels; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDContentOrderType orderType; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
		Mono::Xml::DTDOccurence occurence; // 0x5c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x60
}
