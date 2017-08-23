#pragma once

#include "..\System\Net\NetworkInformation\Win32_MIBICMPSTATS_EX.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_MIB_ICMP_EX : public ValueType // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_MIBICMPSTATS_EX InStats; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::Win32_MIBICMPSTATS_EX OutStats; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
