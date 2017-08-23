#pragma once

#include "..\System\Type.h"
#include "..\System\Runtime\Serialization\StreamingContext.h"
#include "..\System\Collections\ObjectModel\ReadOnlyCollection<System\Type>.h"
#include "..\System\Runtime\Serialization\KnownTypeCollection.h"
#include "..\System\Runtime\Serialization\IDataContractSurrogate.h"
#include "..\System\Xml\XmlDictionaryString.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class DataContractSerializer : public XmlObjectSerializer // 0x30
	{
	public:
		System::Type* type; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::StreamingContext context; // 0x38 (size: 0x10, flags: 0x1, type: 0x11)
		System::Collections::ObjectModel::ReadOnlyCollection<System::Type> known_runtime_types; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		System::Runtime::Serialization::KnownTypeCollection* known_types; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::IDataContractSurrogate* surrogate; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDictionaryString* root_name; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDictionaryString* root_ns; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		bool ignore_ext; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		bool preserve_refs; // 0x71 (size: 0x1, flags: 0x1, type: 0x2)
		int max_items; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		bool names_filled; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
