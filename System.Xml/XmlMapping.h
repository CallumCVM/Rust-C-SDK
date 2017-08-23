#pragma once

#include "..\System\Xml\Serialization\ObjectMap.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\Serialization\SerializationFormat.h"
#include "..\System\Xml\Serialization\SerializationSource.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlMapping : public Object // 0x0
	{
	public:
		System::Xml::Serialization::ObjectMap* map; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* relatedMaps; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::SerializationSource* source; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _elementName; // 0x28 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* _namespace; // 0x30 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* key; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::SerializationFormat format; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
