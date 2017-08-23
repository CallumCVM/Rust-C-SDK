#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\Mono\Xml\Xsl\XslOutput.h"
#include "..\Mono\Xml\Xsl\Emitter.h"
#include "..\System\IO\TextWriter.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Xml\WriteState.h"
#include "..\Mono\Xml\Xsl\Attribute.h"
#include "..\System\Xml\XmlNamespaceManager.h"
#include "..\System\Collections\Specialized\ListDictionary.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\NameTable.h"
#include "..\System\Text\Encoding.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class GenericOutputter : public Outputter // 0x0
	{
	public:
		System::Collections::Hashtable* _outputs; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslOutput* _currentOutput; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Emitter* _emitter; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::TextWriter* pendingTextWriter; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* pendingFirstSpaces; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Attribute* pendingAttributes; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::XmlNamespaceManager* _nsManager; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::ListDictionary* _currentNamespaceDecls; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* newNamespaces; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::NameTable* _nt; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoding* _encoding; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::WriteState _state; // 0x68 (size: 0x4, flags: 0x1, type: 0x11)
		int pendingAttributesPos; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		bool _canProcessAttributes; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		bool _insideCData; // 0x71 (size: 0x1, flags: 0x1, type: 0x2)
		bool _omitXmlDeclaration; // 0x72 (size: 0x1, flags: 0x1, type: 0x2)
		int _xpCount; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x78
}
