#pragma once

#include "..\System\ComponentModel\IComponent.h"
#include "..\System\ComponentModel\EventDescriptorCollection.h"
#include "..\System\ComponentModel\PropertyDescriptorCollection.h"

namespace System
{
	namespace ComponentModel
{
	class ComponentInfo : public Info // 0x38
	{
	public:
		System::ComponentModel::IComponent* _component; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::EventDescriptorCollection* _events; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::PropertyDescriptorCollection* _properties; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
