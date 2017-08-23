#pragma once

namespace I18N
{
	namespace CJK
{
	class DbcsConvert : public Object // 0x0
	{
	public:
		unsigned char* n2u; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* u2n; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
