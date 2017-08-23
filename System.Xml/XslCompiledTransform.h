#pragma once

#include "..\System\Object.h"
#include "..\Mono\Xml\Xsl\CompiledStylesheet.h"
#include "..\System\Xml\XmlWriterSettings.h"

namespace System
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslCompiledTransform : public Object // 0x0
	{
	public:
		System::Object debugger; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		Mono::Xml::Xsl::CompiledStylesheet* s; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlWriterSettings* output_settings; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool enable_debug; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
