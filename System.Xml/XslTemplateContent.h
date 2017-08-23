#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\XPath\XPathNodeType.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
{
{
			namespace Operations
{
	class XslTemplateContent : public XslCompiledElementBase // 0x20
	{
	public:
		System::Collections::ArrayList* content; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool hasStack; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		int stackSize; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		System::Xml::XPath::XPathNodeType parentType; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		bool xslForEach; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
