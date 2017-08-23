#pragma once

#include "..\System\Xml\XmlWriter.h"

namespace System
{
	namespace Xml
{
	class XmlSimpleDictionaryWriter : public XmlDictionaryWriter // 0x20
	{
	public:
		System::Xml::XmlWriter* writer; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
