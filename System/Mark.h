#pragma once

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class Mark : public ValueType // 0x0
	{
	public:
		int Start; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int End; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int Previous; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
