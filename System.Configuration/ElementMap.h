#pragma once

#include "..\System\Configuration\ConfigurationPropertyCollection.h"
#include "..\System\Configuration\ConfigurationCollectionAttribute.h"

namespace System
{
	namespace Configuration
{
	class ElementMap : public Object // 0x0
	{
	public:
		System::Configuration::ConfigurationPropertyCollection* properties; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Configuration::ConfigurationCollectionAttribute* collectionAttribute; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x20
}
