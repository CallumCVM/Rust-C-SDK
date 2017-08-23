#pragma once

#include "..\System\Xml\Schema\XmlSchemaAnnotation.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlAttribute.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaAnnotated : public XmlSchemaObject // 0x70
	{
	public:
		System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* id; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlAttribute* unhandledAttributes; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x88
}
