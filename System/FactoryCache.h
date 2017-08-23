#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Text\RegularExpressions\MRUList.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class FactoryCache : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* factories; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::MRUList* mru_list; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int capacity; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
