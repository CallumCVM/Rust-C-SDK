#pragma once

#include "..\System\Net\NetworkInformation\Win32_MIBICMPSTATS.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32IcmpV4Statistics : public IcmpV4Statistics // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_MIBICMPSTATS iin; // 0x10 (size: 0x34, flags: 0x1, type: 0x11)
		System::Net::NetworkInformation::Win32_MIBICMPSTATS iout; // 0x44 (size: 0x34, flags: 0x1, type: 0x11)
	}; // size = 0x78
}
