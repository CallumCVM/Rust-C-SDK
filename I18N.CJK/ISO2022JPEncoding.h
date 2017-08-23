#pragma once

namespace I18N
{
	namespace CJK
{
	class ISO2022JPEncoding : public MonoEncoding // 0x60
	{
	public:
		bool allow_1byte_kana; // 0x60 (size: 0x1, flags: 0x21, type: 0x2)
		bool allow_shift_io; // 0x61 (size: 0x1, flags: 0x21, type: 0x2)
	}; // size = 0x68
}
