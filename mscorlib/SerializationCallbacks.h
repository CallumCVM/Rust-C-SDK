#pragma once

#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class SerializationCallbacks : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* onSerializingList; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Collections::ArrayList* onSerializedList; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		System::Collections::ArrayList* onDeserializingList; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		System::Collections::ArrayList* onDeserializedList; // 0x28 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x30
}
