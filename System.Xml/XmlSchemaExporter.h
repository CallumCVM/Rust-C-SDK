#pragma once

#include "..\System\Xml\Serialization\XmlSchemas.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\XmlDocument.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlSchemaExporter : public Object // 0x0
	{
	public:
		System::Xml::Serialization::XmlSchemas* schemas; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* exportedMaps; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* exportedElements; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDocument* xmlDoc; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool encodedFormat; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
