#pragma once

#include "..\System\Xml\NameTable\Entry.h"

namespace System
{
	namespace Xml
{
	class NameTable : public XmlNameTable // 0x0
	{
	public:
		System::Xml::NameTable::Entry* buckets; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int count; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int size; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
