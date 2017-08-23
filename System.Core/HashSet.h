#pragma once

#include "..\System\Collections\Generic\HashSet\Link<T>.h"
#include "T.h"
#include "..\System\Collections\Generic\IEqualityComparer<T>.h"
#include "..\System\Runtime\Serialization\SerializationInfo.h"

namespace System
{
	namespace Collections
{
{
		namespace Generic
{
			template <typename T0>
	class HashSet : public Object // 0x0
	{
	public:
		int* table; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Generic::HashSet::Link<T>* links; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		T* slots; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Generic::IEqualityComparer<T> comparer; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System::Runtime::Serialization::SerializationInfo* si; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		int touched; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int empty_slot; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		int count; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		int threshold; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		int generation; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
