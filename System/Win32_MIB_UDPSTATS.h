#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_MIB_UDPSTATS : public ValueType // 0x0
	{
	public:
		unsigned int InDatagrams; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int NoPorts; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int InErrors; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int OutDatagrams; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		int NumAddrs; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
