#pragma once

#include "..\System\Collections\Hashtable\Slot.h"
#include "..\System\Collections\Hashtable\HashKeys.h"
#include "..\System\Collections\Hashtable\HashValues.h"
#include "..\System\Collections\IHashCodeProvider.h"
#include "..\System\Collections\IComparer.h"
#include "..\System\Runtime\Serialization\SerializationInfo.h"
#include "..\System\Collections\IEqualityComparer.h"

namespace System
{
	namespace Collections
{
	class Hashtable : public Object // 0x0
	{
	public:
		int inUse; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int modificationCount; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		float loadFactor; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
		System::Collections::Hashtable::Slot* table; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int* hashes; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		int threshold; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		System::Collections::Hashtable::HashKeys* hashKeys; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable::HashValues* hashValues; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IHashCodeProvider* hcpRef; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IComparer* comparerRef; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::SerializationInfo* serializationInfo; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEqualityComparer* equalityComparer; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
