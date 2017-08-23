#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Attribute.h"
#include "..\System\ComponentModel\AttributeCollection.h"

namespace System
{
	namespace ComponentModel
{
	class MemberDescriptor : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Attribute* attrs; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::ComponentModel::AttributeCollection* attrCollection; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
