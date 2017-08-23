#pragma once

#include "..\System\Collections\IDictionary.h"
#include "..\System\Text\RegularExpressions\EvalDelegate.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class RxInterpreterFactory : public Object // 0x0
	{
	public:
		System::Collections::IDictionary* mapping; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* program; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::RegularExpressions::EvalDelegate* eval_del; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** namesMapping; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		int gap; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
