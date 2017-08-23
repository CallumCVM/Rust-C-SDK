#pragma once

#include "..\System\Text\RegularExpressions\Regex.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Ionic\ComparisonOperator.h"

namespace Ionic
{
	class NameCriterion : public SelectionCriterion // 0x18
	{
	public:
		System::Text::RegularExpressions::Regex* _re; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _regexString; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _MatchingFileSpec; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		Ionic::ComparisonOperator Operator; // 0x30 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x38
}
