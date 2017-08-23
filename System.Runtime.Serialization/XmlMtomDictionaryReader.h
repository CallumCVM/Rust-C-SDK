#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\Text\Encoding.h"
#include "..\System\Net\Mime\ContentType.h"
#include "..\System\Xml\XmlDictionaryReaderQuotas.h"
#include "..\System\Xml\OnXmlDictionaryReaderClose.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlReader.h"

namespace System
{
	namespace Xml
{
	class XmlMtomDictionaryReader : public XmlDictionaryReader // 0x38
	{
	public:
		System::IO::Stream* stream; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* encoding; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* encodings; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::Mime::ContentType* content_type; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDictionaryReaderQuotas* quotas; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::OnXmlDictionaryReaderClose* on_close; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,System.Xml.MimeEncodedStream> readers; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		System::Xml::XmlReader* xml_reader; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReader* initial_reader; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReader* eof_reader; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlReader* part_reader; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* buffer; // 0x90 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::Mime::ContentType* current_content_type; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* current_content_id; // 0xa0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* current_content_encoding; // 0xa8 (size: 0x8, flags: 0x1, type: 0xe)
		int max_buffer_size; // 0xb0 (size: 0x4, flags: 0x1, type: 0x8)
		int buffer_length; // 0xb4 (size: 0x4, flags: 0x1, type: 0x8)
		int peek_char; // 0xb8 (size: 0x4, flags: 0x1, type: 0x8)
		int content_index; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xc0
}
