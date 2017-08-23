#pragma once

#include "..\System\Runtime\Serialization\ObjectRecord.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Runtime\Serialization\ISurrogateSelector.h"
#include "..\System\Runtime\Serialization\StreamingContext.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class ObjectManager : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::ObjectRecord* _objectRecordChain; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::ObjectRecord* _lastObjectRecord; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _deserializedRecords; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _onDeserializedCallbackRecords; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _objectRecords; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool _finalFixup; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		System::Runtime::Serialization::ISurrogateSelector* _selector; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::StreamingContext _context; // 0x48 (size: 0x10, flags: 0x1, type: 0x11)
		int _registeredObjectsCount; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x60
}
