#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_MIBICMPSTATS_EX : public ValueType // 0x0
	{
	public:
		unsigned int Msgs; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Errors; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int* Counts; // 0x18 (size: 0x8, flags: 0x1006, type: 0x1d)
	}; // size = 0x20
}
