#pragma once

#include "..\System\Type.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Xml\Serialization\XmlSerializer\GenerationBatch.h"
#include "..\System\Xml\Serialization\XmlSerializerImplementation.h"

namespace rust 
{
	class SerializerData : public Object // 0x0
	{
	public:
		System::Type* ReaderType; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::MethodInfo* ReaderMethod; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Type* WriterType; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::MethodInfo* WriterMethod; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::Serialization::XmlSerializer::GenerationBatch* Batch; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		System::Xml::Serialization::XmlSerializerImplementation* Implementation; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		int UsageCount; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x48
}
