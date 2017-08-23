#pragma once

#include "..\System\Runtime\Serialization\StreamingContext.h"
#include "..\System\Runtime\Serialization\SerializationBinder.h"
#include "..\System\Runtime\Serialization\ISurrogateSelector.h"
#include "..\System\Runtime\Serialization\Formatters\FormatterAssemblyStyle.h"
#include "..\System\Xml\XmlDictionaryString.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class NetDataContractSerializer : public XmlObjectSerializer // 0x30
	{
	public:
		System::Runtime::Serialization::StreamingContext context; // 0x30 (size: 0x10, flags: 0x1, type: 0x11)
		System::Runtime::Serialization::SerializationBinder* binder; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::ISurrogateSelector* selector; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDictionaryString* root_name; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDictionaryString* root_ns; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		int max_items; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		bool ignore_extensions; // 0x64 (size: 0x1, flags: 0x1, type: 0x2)
		System::Runtime::Serialization::Formatters::FormatterAssemblyStyle ass_style; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
