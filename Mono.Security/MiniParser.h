#pragma once

namespace Mono
{
	namespace Xml
{
	class MiniParser : public Object // 0x0
	{
	public:
		int* twoCharBuff; // 0x10 (size: 0x8, flags: 0x4, type: 0x1d)
		int line; // 0x18 (size: 0x4, flags: 0x4, type: 0x8)
		int col; // 0x1c (size: 0x4, flags: 0x4, type: 0x8)
		bool splitCData; // 0x20 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x28
}