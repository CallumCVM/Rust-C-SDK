#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
	class ToolboxItemAttribute : public Attribute // 0x0
	{
	public:
		System::Type* itemType; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* itemTypeName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
