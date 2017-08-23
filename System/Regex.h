#pragma once

#include "..\System\Text\RegularExpressions\IMachineFactory.h"
#include "..\System\Collections\IDictionary.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\RegularExpressions\RegexOptions.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Text\RegularExpressions\RegexRunnerFactory.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class Regex : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::IMachineFactory* machineFactory; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IDictionary* mapping; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** group_names; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int* group_numbers; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* pattern; // 0x30 (size: 0x8, flags: 0x5, type: 0xe)
		System::Collections::Hashtable* capnames; // 0x38 (size: 0x8, flags: 0x5, type: 0x12)
		System::Collections::Hashtable* caps; // 0x40 (size: 0x8, flags: 0x5, type: 0x12)
		System::Text::RegularExpressions::RegexRunnerFactory* factory; // 0x48 (size: 0x8, flags: 0x5, type: 0x12)
		UnityEngine::UnicodeString** capslist; // 0x50 (size: 0x8, flags: 0x5, type: 0x1d)
		int group_count; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		int gap; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		bool refsInitialized; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
		System::Text::RegularExpressions::RegexOptions roptions; // 0x64 (size: 0x4, flags: 0x5, type: 0x11)
		int capsize; // 0x68 (size: 0x4, flags: 0x5, type: 0x8)
	}; // size = 0x70
}
