#pragma once

namespace Apex
{
	namespace DataStructures
{
	class RectangleXZ : public ValueType // 0x0
	{
	public:
		float _minX; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
		float _minZ; // 0x14 (size: 0x4, flags: 0x1, type: 0xc)
		float _maxX; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
		float _maxZ; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
