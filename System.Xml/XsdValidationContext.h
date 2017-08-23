#pragma once

#include "..\System\Object.h"
#include "..\Mono\Xml\Schema\XsdValidationState.h"
#include "..\System\Collections\Stack.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdValidationContext : public Object // 0x0
	{
	public:
		System::Object xsi_type; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		Mono::Xml::Schema::XsdValidationState* State; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::Stack* element_stack; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
