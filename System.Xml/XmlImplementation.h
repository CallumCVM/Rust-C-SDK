#pragma once

#include "..\System\Xml\XmlNameTable.h"

namespace System
{
	namespace Xml
{
	class XmlImplementation : public Object // 0x0
	{
	public:
		System::Xml::XmlNameTable* InternalNameTable; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x18
}
