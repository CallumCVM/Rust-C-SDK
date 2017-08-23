#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\Specialized\NameObjectCollectionBase\_Item.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\IHashCodeProvider.h"
#include "..\System\Collections\IComparer.h"
#include "..\System\Runtime\Serialization\SerializationInfo.h"
#include "..\System\Collections\Specialized\NameObjectCollectionBase\KeysCollection.h"
#include "..\System\Collections\IEqualityComparer.h"

namespace System
{
	namespace Collections
{
{
		namespace Specialized
{
	class NameObjectCollectionBase : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* m_ItemsContainer; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::NameObjectCollectionBase::_Item* m_NullKeyItem; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* m_ItemsArray; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IHashCodeProvider* m_hashprovider; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IComparer* m_comparer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::SerializationInfo* infoCopy; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::NameObjectCollectionBase::KeysCollection* keyscoll; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IEqualityComparer* equality_comparer; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int m_defCapacity; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_readonly; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x58
}
