#pragma once

#include "..\System\Configuration\PropertyInformation.h"
#include "..\System\Configuration\ConfigurationElement.h"
#include "..\System\Configuration\PropertyInformationCollection.h"

namespace System
{
	namespace Configuration
{
	class ElementInformation : public Object // 0x0
	{
	public:
		System::Configuration::PropertyInformation* propertyInfo; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Configuration::ConfigurationElement* owner; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		System::Configuration::PropertyInformationCollection* properties; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x28
}
