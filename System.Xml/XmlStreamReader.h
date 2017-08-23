#pragma once

#include "..\System\Xml\XmlInputStream.h"

namespace System
{
	namespace Xml
{
	class XmlStreamReader : public NonBlockingStreamReader // 0x58
	{
	public:
		System::Xml::XmlInputStream* input; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
