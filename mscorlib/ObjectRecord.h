#pragma once

#include "..\System\Runtime\Serialization\ObjectRecordStatus.h"
#include "..\System\Object.h"
#include "..\System\Runtime\Serialization\SerializationInfo.h"
#include "..\System\Runtime\Serialization\ISerializationSurrogate.h"
#include "..\System\Runtime\Serialization\ISurrogateSelector.h"
#include "..\System\Reflection\MemberInfo.h"
#include "..\System\Runtime\Serialization\BaseFixupRecord.h"
#include "..\System\Runtime\Serialization\ObjectRecord.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class ObjectRecord : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::ObjectRecordStatus Status; // 0x10 (size: 0x1, flags: 0x6, type: 0x11)
		System::Object OriginalObject; // 0x18 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Object ObjectInstance; // 0x20 (size: 0x8, flags: 0x6, type: 0x1c)
		__int64 ObjectID; // 0x28 (size: 0x8, flags: 0x6, type: 0xa)
		System::Runtime::Serialization::SerializationInfo* Info; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		__int64 IdOfContainingObj; // 0x38 (size: 0x8, flags: 0x6, type: 0xa)
		System::Runtime::Serialization::ISerializationSurrogate* Surrogate; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		System::Runtime::Serialization::ISurrogateSelector* SurrogateSelector; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::MemberInfo* Member; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		int* ArrayIndex; // 0x58 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Runtime::Serialization::BaseFixupRecord* FixupChainAsContainer; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		System::Runtime::Serialization::BaseFixupRecord* FixupChainAsRequired; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		System::Runtime::Serialization::ObjectRecord* Next; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x78
}
