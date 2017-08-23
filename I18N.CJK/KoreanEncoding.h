#pragma once

namespace I18N
{
	namespace CJK
{
	class KoreanEncoding : public DbcsEncoding // 0x60
	{
	public:
		bool useUHC; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
