#pragma once

namespace Apex
{
	namespace DataStructures
{
	class MatrixBounds : public ValueType // 0x0
	{
	public:
		int minColumn; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int maxColumn; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int minRow; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		int maxRow; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
