#pragma once

#include "..\System\ComponentModel\IComponent.h"
#include "..\System\ComponentModel\NestedContainer.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Site : public Object // 0x0
	{
	public:
		System::ComponentModel::IComponent* _component; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::NestedContainer* _nestedContainer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _siteName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
