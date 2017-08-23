#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\System\Xml\XmlAttribute.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaAnnotation : public XmlSchemaObject // 0x70
	{
	public:
		UnityEngine::UnicodeString* id; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlAttribute* unhandledAttributes; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x88
}
