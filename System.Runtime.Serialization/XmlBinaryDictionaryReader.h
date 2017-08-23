#pragma once

#include "..\System\Xml\XmlBinaryDictionaryReader\ISource.h"
#include "..\System\Xml\IXmlDictionary.h"
#include "..\System\Xml\XmlDictionaryReaderQuotas.h"
#include "..\System\Xml\XmlBinaryReaderSession.h"
#include "..\System\Xml\OnXmlDictionaryReaderClose.h"
#include "..\System\Xml\XmlParserContext.h"
#include "..\System\Xml\ReadState.h"
#include "..\System\Xml\XmlBinaryDictionaryReader\NodeInfo.h"
#include "..\UnityEngine\List.h"
#include "..\System\Text\UTF8Encoding.h"
#include "..\System\Xml\XmlNodeType.h"

namespace System
{
	namespace Xml
{
	class XmlBinaryDictionaryReader : public XmlDictionaryReader // 0x38
	{
	public:
		System::Xml::XmlBinaryDictionaryReader::ISource* source; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlDictionary* dictionary; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDictionaryReaderQuotas* quota; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlBinaryReaderSession* session; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::OnXmlDictionaryReaderClose* on_close; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlParserContext* context; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlBinaryDictionaryReader::NodeInfo* node; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlBinaryDictionaryReader::NodeInfo* current; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<System.Xml.XmlBinaryDictionaryReader.AttrNodeInfo>* attributes; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<System.Xml.XmlBinaryDictionaryReader.NodeInfo>* attr_values; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<System.Xml.XmlBinaryDictionaryReader.NodeInfo>* node_stack; // 0x88 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<System.Xml.XmlQualifiedName>* ns_store; // 0x90 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<int,System.Xml.XmlDictionaryString> ns_dict_store; // 0x98 (size: 0x8, flags: 0x1, type: 0x15)
		unsigned char* tmp_buffer; // 0xa0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::UTF8Encoding* utf8enc; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::ReadState state; // 0xb0 (size: 0x4, flags: 0x1, type: 0x11)
		int attr_count; // 0xb4 (size: 0x4, flags: 0x1, type: 0x8)
		int attr_value_count; // 0xb8 (size: 0x4, flags: 0x1, type: 0x8)
		int current_attr; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		int depth; // 0xc0 (size: 0x4, flags: 0x1, type: 0x8)
		int ns_slot; // 0xc4 (size: 0x4, flags: 0x1, type: 0x8)
		int next; // 0xc8 (size: 0x4, flags: 0x1, type: 0x8)
		bool is_next_end_element; // 0xcc (size: 0x1, flags: 0x1, type: 0x2)
		int array_item_remaining; // 0xd0 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char array_item_type; // 0xd4 (size: 0x1, flags: 0x1, type: 0x5)
		System::Xml::XmlNodeType array_state; // 0xd8 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xe0
}
