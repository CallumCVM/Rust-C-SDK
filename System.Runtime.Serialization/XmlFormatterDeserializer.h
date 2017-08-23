#pragma once

#include "..\System\Runtime\Serialization\KnownTypeCollection.h"
#include "..\System\Runtime\Serialization\IDataContractSurrogate.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class XmlFormatterDeserializer : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::KnownTypeCollection* types; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::IDataContractSurrogate* surrogate; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* references; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
