#pragma once

#include "..\System\Text\RegularExpressions\Regex.h"
#include "..\System\Text\RegularExpressions\IMachine.h"
#include "..\System\Text\RegularExpressions\GroupCollection.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class Match : public Group // 0x30
	{
	public:
		System::Text::RegularExpressions::Regex* regex; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::IMachine* machine; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::GroupCollection* groups; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		int text_length; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
