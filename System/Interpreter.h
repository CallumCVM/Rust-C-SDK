#pragma once

#include "..\System\UInt16.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\RegularExpressions\QuickSearch.h"
#include "..\System\Text\RegularExpressions\Interpreter\RepeatContext.h"
#include "..\System\Text\RegularExpressions\Interpreter\IntStack.h"
#include "..\System\Text\RegularExpressions\Mark.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class Interpreter : public BaseMachine // 0x18
	{
	public:
		System::UInt16* program; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* text; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Text::RegularExpressions::QuickSearch* qs; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::Interpreter::RepeatContext* repeat; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::Interpreter::RepeatContext* fast; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::Interpreter::IntStack stack; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		System::Text::RegularExpressions::Interpreter::RepeatContext* deep; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::Mark* marks; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		int* groups; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		int program_start; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int text_end; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		int group_count; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		int match_min; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		int scan_ptr; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		int mark_start; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		int mark_end; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x88
}
