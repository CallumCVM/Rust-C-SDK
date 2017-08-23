#pragma once

#include "..\System\Xml\XmlDictionaryWriter.h"
#include "..\System\Object.h"
#include "..\System\Runtime\Serialization\KnownTypeCollection.h"
#include "..\System\Runtime\Serialization\IDataContractSurrogate.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class XmlFormatterSerializer : public Object // 0x0
	{
	public:
		System::Xml::XmlDictionaryWriter* writer; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object graph; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Runtime::Serialization::KnownTypeCollection* types; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::IDataContractSurrogate* surrogate; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* objects; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* references; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool save_id; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool ignore_unknown; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
		int max_items; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
