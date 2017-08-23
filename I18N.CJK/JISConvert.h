#pragma once

namespace I18N
{
	namespace CJK
{
	class JISConvert : public Object // 0x0
	{
	public:
		unsigned char* jisx0208ToUnicode; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* jisx0212ToUnicode; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* cjkToJis; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* greekToJis; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* extraToJis; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x38
}
