#pragma once

namespace Apex
{
	namespace DataStructures
{
	class VectorXZ : public ValueType // 0x0
	{
	public:
		int x; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int z; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
