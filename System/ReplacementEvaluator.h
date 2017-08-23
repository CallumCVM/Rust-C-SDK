#pragma once

#include "..\System\Text\RegularExpressions\Regex.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class ReplacementEvaluator : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::Regex* regex; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int* pieces; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* replacement; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int n_pieces; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
