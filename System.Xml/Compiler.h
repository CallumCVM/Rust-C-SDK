#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\XPath\XPathNavigator.h"
#include "..\System\Collections\Stack.h"
#include "..\Mono\Xml\Xsl\XslStylesheet.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\XmlNamespaceManager.h"
#include "..\System\Xml\XmlResolver.h"
#include "..\System\Security\Policy\Evidence.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Xml\Xsl\XsltDebuggerWrapper.h"
#include "..\Mono\Xml\Xsl\MSXslScriptManager.h"
#include "..\Mono\Xml\XPath\XPathParser.h"
#include "..\Mono\Xml\Xsl\XsltPatternParser.h"
#include "..\Mono\Xml\Xsl\VariableScope.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class Compiler : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* inputStack; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::XPathNavigator* currentInput; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* styleStack; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslStylesheet* currentStyle; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* keys; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* globalVariables; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* attrSets; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNamespaceManager* nsMgr; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* res; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::Evidence* evidence; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslStylesheet* rootStyle; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* outputs; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* stylesheetVersion; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::Xsl::XsltDebuggerWrapper* debugger; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::MSXslScriptManager* msScripts; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::XPath::XPathParser* xpathParser; // 0x88 (size: 0x8, flags: 0x3, type: 0x12)
		Mono::Xml::Xsl::XsltPatternParser* patternParser; // 0x90 (size: 0x8, flags: 0x3, type: 0x12)
		Mono::Xml::Xsl::VariableScope* curVarScope; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* decimalFormats; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		bool keyCompilationMode; // 0xa8 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xb0
}
