#pragma once

#include "..\System\Xml\XmlNameTable.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlImplementation.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\XmlNameEntryCache.h"
#include "..\System\Xml\XmlLinkedNode.h"
#include "..\System\Xml\XmlAttribute.h"
#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\System\Xml\Schema\IXmlSchemaInfo.h"
#include "..\System\Xml\XmlNodeChangedEventHandler.h"

namespace System
{
	namespace Xml
{
	class XmlDocument : public XmlNode // 0x28
	{
	public:
		System::Xml::XmlNameTable* nameTable; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* baseURI; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlImplementation* implementation; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* resolver; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* idTable; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameEntryCache* nameCache; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlLinkedNode* lastLinkedChild; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlAttribute* nsNodeXml; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaSet* schemas; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::IXmlSchemaInfo* schemaInfo; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNodeChangedEventHandler* NodeChanged; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNodeChangedEventHandler* NodeChanging; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNodeChangedEventHandler* NodeInserted; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNodeChangedEventHandler* NodeInserting; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNodeChangedEventHandler* NodeRemoved; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNodeChangedEventHandler* NodeRemoving; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		bool optimal_create_element; // 0xa8 (size: 0x1, flags: 0x1, type: 0x2)
		bool optimal_create_attribute; // 0xa9 (size: 0x1, flags: 0x1, type: 0x2)
		bool preserveWhitespace; // 0xaa (size: 0x1, flags: 0x1, type: 0x2)
		bool loadMode; // 0xab (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xb0
}
