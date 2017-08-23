#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslModedTemplateTable : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* unnamedTemplates; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* mode; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool sorted; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
