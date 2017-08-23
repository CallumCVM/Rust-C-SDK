#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\Encoding.h"
#include "..\System\Xml\XmlNamespaceManager.h"
#include "..\System\Xml\XmlNameTable.h"
#include "..\System\Xml\XmlSpace.h"
#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Xml\DTDObjectModel.h"

namespace System
{
	namespace Xml
{
	class XmlParserContext : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* baseURI; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* docTypeName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Text::Encoding* encoding; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* internalSubset; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlNamespaceManager* namespaceManager; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameTable* nameTable; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* publicID; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* systemID; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* xmlLang; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* contextItems; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::DTDObjectModel* dtd; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlSpace xmlSpace; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		int contextItemCount; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
