#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\Mono\Xml\Xsl\XslTransformProcessor.h"
#include "..\Mono\Xml\Xsl\XsltCompiledContext\XsltContextInfo.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XsltCompiledContext : public XsltContext // 0x40
	{
	public:
		System::Collections::Hashtable* keyNameCache; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* keyIndexTables; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* patternNavCaches; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslTransformProcessor* p; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XsltCompiledContext::XsltContextInfo* scopes; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		int scopeAt; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
