#pragma once

#include "..\System\Net\NetworkInformation\Win32_MIBICMPSTATS_EX.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32IcmpV6Statistics : public IcmpV6Statistics // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_MIBICMPSTATS_EX iin; // 0x10 (size: 0x10, flags: 0x1, type: 0x11)
		System::Net::NetworkInformation::Win32_MIBICMPSTATS_EX iout; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
