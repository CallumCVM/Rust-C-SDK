#pragma once

#include "..\System\Xml\XmlReader.h"
#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdInference : public Object // 0x0
	{
	public:
		System::Xml::XmlReader* source; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaSet* schemas; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* newElements; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* newAttributes; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool laxOccurrence; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool laxTypeInference; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
