#pragma once

#include "..\System\Globalization\CultureInfo.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Char.h"
#include "..\System\ComponentModel\MaskedTextProvider\EditPosition.h"

namespace System
{
	namespace ComponentModel
{
	class MaskedTextProvider : public Object // 0x0
	{
	public:
		System::Globalization::CultureInfo* culture; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* mask; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::ComponentModel::MaskedTextProvider::EditPosition* edit_positions; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool allow_prompt_as_input; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool ascii_only; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		bool include_literals; // 0x2a (size: 0x1, flags: 0x1, type: 0x2)
		bool include_prompt; // 0x2b (size: 0x1, flags: 0x1, type: 0x2)
		bool is_password; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
		System::Char password_char; // 0x2e (size: 0x2, flags: 0x1, type: 0x3)
		System::Char prompt_char; // 0x30 (size: 0x2, flags: 0x1, type: 0x3)
		bool reset_on_prompt; // 0x32 (size: 0x1, flags: 0x1, type: 0x2)
		bool reset_on_space; // 0x33 (size: 0x1, flags: 0x1, type: 0x2)
		bool skip_literals; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
