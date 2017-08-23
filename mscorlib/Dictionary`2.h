#pragma once

#include "..\System\Collections\Generic\Link.h"
#include "TKey.h"
#include "TValue.h"
#include "..\System\Collections\Generic\IEqualityComparer<TKey>.h"
#include "..\System\Runtime\Serialization\SerializationInfo.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
			template <typename T0, typename T1>
	class Dictionary`2 : public Object // 0x0
	{
	public:
		int* table; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Generic::Link* linkSlots; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		TKey* keySlots; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		TValue* valueSlots; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		int touchedSlots; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int emptySlot; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int count; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int threshold; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		System::Collections::Generic::IEqualityComparer<TKey> hcp; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		System::Runtime::Serialization::SerializationInfo* serialization_info; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int generation; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
