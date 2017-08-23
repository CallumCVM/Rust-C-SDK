#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\Mono\Xml\Xsl\XslStylesheet.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslTemplateTable : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* templateTables; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* namedTemplates; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::XslStylesheet* parent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
