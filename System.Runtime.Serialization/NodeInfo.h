#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlDictionaryString.h"
#include "..\System\Xml\XmlNodeType.h"
#include "..\System\Object.h"

namespace rust 
{
	class NodeInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Prefix; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		System::Xml::XmlDictionaryString* DictLocalName; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::XmlDictionaryString* DictNS; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::XmlDictionaryString* DictValue; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Object TypedValue; // 0x30 (size: 0x8, flags: 0x6, type: 0x1c)
		UnityEngine::UnicodeString* name; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* local_name; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* ns; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* value; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		bool IsAttributeValue; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		int Position; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
		System::Xml::XmlNodeType NodeType; // 0x60 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned char ValueType; // 0x64 (size: 0x1, flags: 0x6, type: 0x5)
		int NSSlot; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x70
}
