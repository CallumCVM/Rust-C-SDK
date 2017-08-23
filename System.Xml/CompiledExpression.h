#pragma once

#include "..\System\Xml\IXmlNamespaceResolver.h"
#include "..\System\Xml\XPath\Expression.h"
#include "..\System\Xml\XPath\XPathSorters.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class CompiledExpression : public XPathExpression // 0x0
	{
	public:
		System::Xml::IXmlNamespaceResolver* _nsm; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Xml::XPath::Expression* _expr; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		System::Xml::XPath::XPathSorters* _sorters; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* rawExpression; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
