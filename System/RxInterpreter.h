#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\RegularExpressions\EvalDelegate.h"
#include "..\System\Text\RegularExpressions\Mark.h"
#include "..\System\Text\RegularExpressions\RxInterpreter\IntStack.h"
#include "..\System\Text\RegularExpressions\RxInterpreter\RepeatContext.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class RxInterpreter : public BaseMachine // 0x18
	{
	public:
		unsigned char* program; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* str; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int* groups; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::RegularExpressions::EvalDelegate* eval_del; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::Mark* marks; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::RegularExpressions::RxInterpreter::IntStack stack; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		System::Text::RegularExpressions::RxInterpreter::RepeatContext* repeat; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::RxInterpreter::RepeatContext* deep; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		int string_start; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int string_end; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		int group_count; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		int mark_start; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		int mark_end; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x78
}
