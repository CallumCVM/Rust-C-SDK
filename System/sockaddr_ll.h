#pragma once

#include "..\System\UInt16.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class sockaddr_ll : public ValueType // 0x0
	{
	public:
		System::UInt16 sll_family; // 0x10 (size: 0x2, flags: 0x6, type: 0x7)
		System::UInt16 sll_protocol; // 0x12 (size: 0x2, flags: 0x6, type: 0x7)
		int sll_ifindex; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		System::UInt16 sll_hatype; // 0x18 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned char sll_pkttype; // 0x1a (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char sll_halen; // 0x1b (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char* sll_addr; // 0x20 (size: 0x8, flags: 0x1006, type: 0x1d)
	}; // size = 0x28
}
