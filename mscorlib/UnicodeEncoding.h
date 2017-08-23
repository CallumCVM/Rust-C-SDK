#pragma once

namespace System
{
	namespace Text
{
	class UnicodeEncoding : public Encoding // 0x58
	{
	public:
		bool bigEndian; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		bool byteOrderMark; // 0x59 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
