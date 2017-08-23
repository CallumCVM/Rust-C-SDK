#pragma once

#include "..\System\Xml\XmlBinaryDictionaryWriter\MyBinaryWriter.h"
#include "..\System\Xml\IXmlDictionary.h"
#include "..\System\Xml\XmlDictionary.h"
#include "..\System\Xml\XmlBinaryWriterSession.h"
#include "..\System\Text\Encoding.h"
#include "..\System\IO\MemoryStream.h"
#include "..\System\Xml\WriteState.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlSpace.h"
#include "..\System\Collections\Generic\Stack<System\Xml\XmlSpace>.h"
#include "..\System\Object.h"
#include "..\System\Xml\XmlBinaryDictionaryWriter\SaveTarget.h"

namespace System
{
	namespace Xml
{
	class XmlBinaryDictionaryWriter : public XmlDictionaryWriter // 0x20
	{
	public:
		System::Xml::XmlBinaryDictionaryWriter::MyBinaryWriter* original; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlBinaryDictionaryWriter::MyBinaryWriter* writer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlBinaryDictionaryWriter::MyBinaryWriter* buffer_writer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::IXmlDictionary* dict_ext; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlDictionary* dict_int; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlBinaryWriterSession* session; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* utf8Enc; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::MemoryStream* buffer; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<System.Collections.Generic.KeyValuePair<UnityEngine::UnicodeString*,System.Object>>* namespaces; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* xml_lang; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		System.Collections.Generic.Stack<int> ns_index_stack; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Stack<UnityEngine::UnicodeString*> xml_lang_stack; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Stack<System::Xml::XmlSpace> xml_space_stack; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Stack<UnityEngine::UnicodeString*> element_ns_stack; // 0x88 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* element_ns; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* element_prefix; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* attr_value; // 0xa0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* current_attr_prefix; // 0xa8 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object current_attr_name; // 0xb0 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object current_attr_ns; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1c)
		bool owns_stream; // 0xc0 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::WriteState state; // 0xc4 (size: 0x4, flags: 0x1, type: 0x11)
		bool open_start_element; // 0xc8 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::XmlSpace xml_space; // 0xcc (size: 0x4, flags: 0x1, type: 0x11)
		int ns_index; // 0xd0 (size: 0x4, flags: 0x1, type: 0x8)
		int element_count; // 0xd4 (size: 0x4, flags: 0x1, type: 0x8)
		bool attr_typed_value; // 0xd8 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::XmlBinaryDictionaryWriter::SaveTarget save_target; // 0xdc (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xe0
}
