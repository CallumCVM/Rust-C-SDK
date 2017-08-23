#pragma once

#include "..\System\IO\TextWriter.h"
#include "..\System\Xml\XmlWriterSettings.h"
#include "..\System\Text\Encoding.h"
#include "..\System\Net\Mime\ContentType.h"
#include "..\System\Xml\XmlWriter.h"

namespace System
{
	namespace Xml
{
	class XmlMtomDictionaryWriter : public XmlDictionaryWriter // 0x20
	{
	public:
		System::IO::TextWriter* writer; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlWriterSettings* xml_writer_settings; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* encoding; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Mime::ContentType* content_type; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlWriter* w; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		int max_bytes; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		bool write_headers; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
		bool owns_stream; // 0x4d (size: 0x1, flags: 0x1, type: 0x2)
		int depth; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int section_count; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
