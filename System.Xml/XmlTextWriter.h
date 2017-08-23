#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\IO\TextWriter.h"
#include "..\System\IO\StringWriter.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlTextWriter\XmlDeclState.h"
#include "..\System\Xml\NewLineHandling.h"
#include "..\System\Xml\WriteState.h"
#include "..\System\Xml\XmlNodeType.h"
#include "..\System\Xml\XmlNamespaceManager.h"
#include "..\System\Xml\XmlTextWriter\XmlNodeInfo.h"
#include "..\System\Collections\Stack.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\NamespaceHandling.h"
#include "..\System\Char.h"

namespace System
{
	namespace Xml
{
	class XmlTextWriter : public XmlWriter // 0x18
	{
	public:
		System::IO::Stream* base_stream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::TextWriter* source; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::TextWriter* writer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::StringWriter* preserver; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* preserved_name; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlNamespaceManager* nsmanager; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlTextWriter::XmlNodeInfo* elements; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Stack* new_local_namespaces; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* explicit_nsdecls; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* indent_string; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* newline; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		bool is_preserved_xmlns; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		bool allow_doc_fragment; // 0x71 (size: 0x1, flags: 0x1, type: 0x2)
		bool close_output_stream; // 0x72 (size: 0x1, flags: 0x1, type: 0x2)
		bool ignore_encoding; // 0x73 (size: 0x1, flags: 0x1, type: 0x2)
		bool namespaces; // 0x74 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::XmlTextWriter::XmlDeclState xmldecl_state; // 0x78 (size: 0x4, flags: 0x1, type: 0x11)
		bool check_character_validity; // 0x7c (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::NewLineHandling newline_handling; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
		bool is_document_entity; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
		System::Xml::WriteState state; // 0x88 (size: 0x4, flags: 0x1, type: 0x11)
		System::Xml::XmlNodeType node_state; // 0x8c (size: 0x4, flags: 0x1, type: 0x11)
		int open_count; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		System::Xml::NamespaceHandling namespace_handling; // 0x94 (size: 0x4, flags: 0x1, type: 0x11)
		bool indent; // 0x98 (size: 0x1, flags: 0x1, type: 0x2)
		int indent_count; // 0x9c (size: 0x4, flags: 0x1, type: 0x8)
		System::Char indent_char; // 0xa0 (size: 0x2, flags: 0x1, type: 0x3)
		bool indent_attributes; // 0xa2 (size: 0x1, flags: 0x1, type: 0x2)
		System::Char quote_char; // 0xa4 (size: 0x2, flags: 0x1, type: 0x3)
		bool v2; // 0xa6 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa8
}
