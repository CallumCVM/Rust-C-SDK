#pragma once

#include "..\System\Collections\Stack.h"
#include "..\System\Xml\XmlParserInput\XmlParserInputSource.h"

namespace System
{
	namespace Xml
{
	class XmlParserInput : public Object // 0x0
	{
	public:
		System::Collections::Stack* sourceStack; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlParserInput::XmlParserInputSource* source; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool has_peek; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int peek_char; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		bool allowTextDecl; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
