#pragma once

namespace I18N
{
	namespace Common
{
	class MonoEncoding : public Encoding // 0x58
	{
	public:
		int win_code_page; // 0x58 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x60
}
