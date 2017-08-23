#pragma once

#include "..\System\Xml\Schema\XmlSchemaSimpleTypeContent.h"
#include "..\System\Xml\Schema\XmlSchemaDerivationMethod.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaSimpleType : public XmlSchemaType // 0xc0
	{
	public:
		System::Xml::Schema::XmlSchemaSimpleTypeContent* content; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		bool islocal; // 0xc8 (size: 0x1, flags: 0x3, type: 0x2)
		bool recursed; // 0xc9 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::Schema::XmlSchemaDerivationMethod variety; // 0xcc (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xd0
}
