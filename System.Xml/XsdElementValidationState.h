#pragma once

#include "..\System\Xml\Schema\XmlSchemaElement.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdElementValidationState : public XsdValidationState // 0x20
	{
	public:
		System::Xml::Schema::XmlSchemaElement* element; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x28
}
