#pragma once

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class Interval : public ValueType // 0x0
	{
	public:
		int low; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int high; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		bool contiguous; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
