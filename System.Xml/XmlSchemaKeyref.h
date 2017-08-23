#pragma once

#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchemaIdentityConstraint.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaKeyref : public XmlSchemaIdentityConstraint // 0xb0
	{
	public:
		System::Xml::XmlQualifiedName* refer; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaIdentityConstraint* target; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xc0
}
