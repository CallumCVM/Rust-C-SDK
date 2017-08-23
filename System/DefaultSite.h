#pragma once

#include "..\System\ComponentModel\IComponent.h"
#include "..\System\ComponentModel\Container.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class DefaultSite : public Object // 0x0
	{
	public:
		System::ComponentModel::IComponent* component; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::ComponentModel::Container* container; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
