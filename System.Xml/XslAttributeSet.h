#pragma once

#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Collections\ArrayList.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslAttributeSet : public XslCompiledElement // 0x20
	{
	public:
		System::Xml::XmlQualifiedName* name; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* usedAttributeSets; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* attributes; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
