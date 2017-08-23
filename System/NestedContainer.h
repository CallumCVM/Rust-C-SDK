#pragma once

#include "..\System\ComponentModel\IComponent.h"

namespace System
{
	namespace ComponentModel
{
	class NestedContainer : public Container // 0x18
	{
	public:
		System::ComponentModel::IComponent* _owner; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
