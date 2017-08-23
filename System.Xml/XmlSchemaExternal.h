#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchema.h"
#include "..\System\Xml\XmlAttribute.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaExternal : public XmlSchemaObject // 0x70
	{
	public:
		UnityEngine::UnicodeString* id; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchema* schema; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* location; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlAttribute* unhandledAttributes; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x90
}
