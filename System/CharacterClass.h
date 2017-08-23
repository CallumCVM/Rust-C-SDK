#pragma once

#include "..\System\Collections\BitArray.h"
#include "..\System\Text\RegularExpressions\IntervalCollection.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
{
{
			namespace Syntax
{
	class CharacterClass : public Expression // 0x0
	{
	public:
		System::Collections::BitArray* pos_cats; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::BitArray* neg_cats; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::IntervalCollection* intervals; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool negate; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool ignore; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
