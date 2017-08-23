#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\ComponentModel\ToolboxItemFilterType.h"

namespace System
{
	namespace ComponentModel
{
	class ToolboxItemFilterAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* Filter; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::ComponentModel::ToolboxItemFilterType ItemFilterType; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
