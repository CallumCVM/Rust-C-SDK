#pragma once

#include "..\System\Xml\Serialization\XmlSerializationCollectionFixupCallback.h"
#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class CollectionFixup : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object collection; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object collectionItems; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* id; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
