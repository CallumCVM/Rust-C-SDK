#pragma once

#include "..\Mono\Xml\Xsl\XsltDebuggerWrapper.h"
#include "..\Mono\Xml\Xsl\CompiledStylesheet.h"
#include "..\Mono\Xml\Xsl\XslStylesheet.h"
#include "..\System\Collections\Stack.h"
#include "..\System\Xml\XPath\XPathNavigator.h"
#include "..\System\Xml\Xsl\XsltArgumentList.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Xml\Xsl\XsltCompiledContext.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Object.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslTransformProcessor : public Object // 0x0
	{
	public:
		Mono::Xml::Xsl::XsltDebuggerWrapper* debugger; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::CompiledStylesheet* compiledStyle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslStylesheet* style; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* currentTemplateStack; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNavigator* root; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Xsl::XsltArgumentList* args; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* resolver; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* currentOutputUri; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::Xsl::XsltCompiledContext* XPathContext; // 0x50 (size: 0x8, flags: 0x23, type: 0x12)
		System::Collections::Hashtable* globalVariableTable; // 0x58 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::Hashtable* docCache; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* outputStack; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* avtSB; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* paramPassingCache; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* nodesetStack; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* variableStack; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object* currentStack; // 0x90 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Hashtable* busyTable; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xa0
}
