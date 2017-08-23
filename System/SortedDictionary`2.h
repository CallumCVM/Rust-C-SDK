#pragma once

#include "..\System\Collections\Generic\RBTree.h"
#include "..\System\Collections\Generic\SortedDictionary\NodeHelper<TKey,TValue>.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
			template <typename T0, typename T1>
	class SortedDictionary`2 : public Object // 0x0
	{
	public:
		System::Collections::Generic::RBTree* tree; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::SortedDictionary::NodeHelper<TKey,TValue> hlp; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
