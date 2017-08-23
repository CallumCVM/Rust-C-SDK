#pragma once

#include "..\System\Xml\Schema\XmlSchemaAny.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdAnyValidationState : public XsdValidationState // 0x20
	{
	public:
		System::Xml::Schema::XmlSchemaAny* any; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x28
}
