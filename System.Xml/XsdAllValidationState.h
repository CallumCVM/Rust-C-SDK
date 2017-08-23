#pragma once

#include "..\System\Xml\Schema\XmlSchemaAll.h"
#include "..\System\Collections\ArrayList.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdAllValidationState : public XsdValidationState // 0x20
	{
	public:
		System::Xml::Schema::XmlSchemaAll* all; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		System::Collections::ArrayList* consumed; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
