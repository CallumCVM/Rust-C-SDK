#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\XmlNameTable.h"
#include "..\System\Xml\XmlNameEntry.h"
#include "..\System\Char.h"

namespace System
{
	namespace Xml
{
	class XmlNameEntryCache : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* table; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameTable* nameTable; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNameEntry* dummy; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Char* cacheBuffer; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x30
}
