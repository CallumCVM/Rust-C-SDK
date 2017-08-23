#pragma once

#include "..\System\Xml\Xsl\IStaticXsltContext.h"
#include "..\System\IO\TextWriter.h"
#include "..\Mono\Xml\XPath\yydebug\yyDebug.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class XPathParser : public Object // 0x0
	{
	public:
		System::Xml::Xsl::IStaticXsltContext* Context; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::IO::TextWriter* ErrorOutput; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Mono::Xml::XPath::yydebug::yyDebug* debug; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		int eof_token; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int yyExpectingState; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int yyMax; // 0x30 (size: 0x4, flags: 0x4, type: 0x8)
	}; // size = 0x38
}
