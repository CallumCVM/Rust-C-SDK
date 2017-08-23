#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Runtime\Serialization\SerializationInfo.h"
#include "..\System\Collections\IEqualityComparer.h"

namespace System
{
	namespace Collections
{
{
		namespace Specialized
{
	class OrderedDictionary : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* list; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* hash; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::SerializationInfo* serializationInfo; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEqualityComparer* comparer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool readOnly; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		int initialCapacity; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
