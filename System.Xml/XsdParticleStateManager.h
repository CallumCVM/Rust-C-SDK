#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\Schema\XmlSchemaContentProcessing.h"
#include "..\System\Xml\Schema\XmlSchemaElement.h"
#include "..\System\Collections\Stack.h"
#include "..\Mono\Xml\Schema\XsdValidationContext.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdParticleStateManager : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* table; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaElement* CurrentElement; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Collections::Stack* ContextStack; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Mono::Xml::Schema::XsdValidationContext* Context; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::Schema::XmlSchemaContentProcessing processContents; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
