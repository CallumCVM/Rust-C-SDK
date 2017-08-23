#pragma once

#include "..\System\Xml\XmlBinaryDictionaryReader.h"

namespace rust 
{
	class AttrNodeInfo : public NodeInfo // 0x70
	{
	public:
		System::Xml::XmlBinaryDictionaryReader* owner; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		int ValueIndex; // 0x78 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x80
}
