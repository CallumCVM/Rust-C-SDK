#pragma once

#include "..\Mono\Xml\Xsl\XslStylesheet.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\XmlNamespaceManager.h"
#include "..\Mono\Xml\Xsl\MSXslScriptManager.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class CompiledStylesheet : public Object // 0x0
	{
	public:
		Mono::Xml::Xsl::XslStylesheet* style; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* globalVariables; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* attrSets; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNamespaceManager* nsMgr; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* keys; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* outputs; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* decimalFormats; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::MSXslScriptManager* msScripts; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
