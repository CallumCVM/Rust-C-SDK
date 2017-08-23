#pragma once

#include "..\System\Xml\Schema\XmlSchemaChoice.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdChoiceValidationState : public XsdValidationState // 0x20
	{
	public:
		System::Xml::Schema::XmlSchemaChoice* choice; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		bool emptiable; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool emptiableComputed; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
