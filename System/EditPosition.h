#pragma once

#include "..\System\ComponentModel\MaskedTextProvider.h"
#include "..\System\ComponentModel\MaskedTextProvider\EditType.h"
#include "..\System\ComponentModel\MaskedTextProvider\EditState.h"
#include "..\System\Char.h"

namespace rust 
{
	class EditPosition : public Object // 0x0
	{
	public:
		System::ComponentModel::MaskedTextProvider* Parent; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::ComponentModel::MaskedTextProvider::EditType Type; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		System::ComponentModel::MaskedTextProvider::EditState State; // 0x1c (size: 0x4, flags: 0x6, type: 0x11)
		System::Char MaskCharacter; // 0x20 (size: 0x2, flags: 0x6, type: 0x3)
		System::Char input; // 0x22 (size: 0x2, flags: 0x6, type: 0x3)
	}; // size = 0x28
}
