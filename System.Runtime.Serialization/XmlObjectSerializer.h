#pragma once

#include "..\System\Runtime\Serialization\IDataContractSurrogate.h"
#include "..\System\Runtime\Serialization\SerializationBinder.h"
#include "..\System\Runtime\Serialization\ISurrogateSelector.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class XmlObjectSerializer : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::IDataContractSurrogate* surrogate; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::SerializationBinder* binder; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::ISurrogateSelector* selector; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int max_items; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
