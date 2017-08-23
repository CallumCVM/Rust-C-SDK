#pragma once

#include "..\System\Xml\Schema\XmlSchema.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchemaGroup.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaGroupRef : public XmlSchemaParticle // 0xf8
	{
	public:
		System::Xml::Schema::XmlSchema* schema; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* refName; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaGroup* referencedGroup; // 0x108 (size: 0x8, flags: 0x1, type: 0x12)
		bool busy; // 0x110 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x118
}
