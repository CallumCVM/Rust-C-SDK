#pragma once

#include "..\System\Xml\XmlWriter.h"

namespace System
{
	namespace Diagnostics
{
	class XmlWriterTraceListener : public TextWriterTraceListener // 0x48
	{
	public:
		System::Xml::XmlWriter* w; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
