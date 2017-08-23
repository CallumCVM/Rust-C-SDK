#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32LengthFlagsUnion : public ValueType // 0x0
	{
	public:
		unsigned int Length; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Flags; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
