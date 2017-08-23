#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\Specialized\NameValueCollection.h"
#include "..\Mono\Xml\Xsl\XslTemplateTable.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslStylesheet : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* imports; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* spaceControls; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Specialized::NameValueCollection* namespaceAliases; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* parameters; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* keys; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* variables; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslTemplateTable* templates; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* baseURI; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* version; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* extensionElementPrefixes; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::XmlQualifiedName* excludeResultPrefixes; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* stylesheetNamespaces; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* inProcessIncludes; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		bool countedSpaceControlExistence; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		bool cachedHasSpaceControls; // 0x79 (size: 0x1, flags: 0x1, type: 0x2)
		bool countedNamespaceAliases; // 0x7a (size: 0x1, flags: 0x1, type: 0x2)
		bool cachedHasNamespaceAliases; // 0x7b (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
