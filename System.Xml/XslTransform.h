#pragma once

#include "..\System\Object.h"
#include "..\Mono\Xml\Xsl\CompiledStylesheet.h"
#include "..\System\Xml\XmlResolver.h"

namespace System
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslTransform : public Object // 0x0
	{
	public:
		System::Object debugger; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		Mono::Xml::Xsl::CompiledStylesheet* s; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* xmlResolver; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
