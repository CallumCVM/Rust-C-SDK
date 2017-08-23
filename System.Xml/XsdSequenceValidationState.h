#pragma once

#include "..\System\Xml\Schema\XmlSchemaSequence.h"
#include "..\Mono\Xml\Schema\XsdValidationState.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdSequenceValidationState : public XsdValidationState // 0x20
	{
	public:
		System::Xml::Schema::XmlSchemaSequence* seq; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		Mono::Xml::Schema::XsdValidationState* currentAutomata; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int current; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		bool emptiable; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
