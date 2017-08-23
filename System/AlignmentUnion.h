#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class AlignmentUnion : public ValueType // 0x0
	{
	public:
		unsigned __int64 Alignment; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		int Length; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int IfIndex; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
