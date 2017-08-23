#pragma once

#include "..\System\Collections\Generic\Dictionary<TKey,TItem>.h"
#include "..\System\Collections\Generic\IEqualityComparer<TKey>.h"

namespace System
{
	namespace Collections
{
{
		namespace ObjectModel
{
			template <typename T0, typename T1>
	class KeyedCollection`2 : public Collection`1 // 0x20
	{
	public:
		System::Collections::Generic::Dictionary<TKey,TItem> dictionary; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IEqualityComparer<TKey> comparer; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		int dictionaryCreationThreshold; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
