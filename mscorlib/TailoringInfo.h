#pragma once

namespace Mono
{
	namespace Globalization
{
{
		namespace Unicode
{
	class TailoringInfo : public Object // 0x0
	{
	public:
		int LCID; // 0x10 (size: 0x4, flags: 0x26, type: 0x8)
		int TailoringIndex; // 0x14 (size: 0x4, flags: 0x26, type: 0x8)
		int TailoringCount; // 0x18 (size: 0x4, flags: 0x26, type: 0x8)
		bool FrenchSort; // 0x1c (size: 0x1, flags: 0x26, type: 0x2)
	}; // size = 0x20
}
