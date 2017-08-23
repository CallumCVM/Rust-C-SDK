#pragma once

#include "..\System\Net\NetworkInformation\Win32_MIBICMPSTATS.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_MIBICMPINFO : public ValueType // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_MIBICMPSTATS InStats; // 0x10 (size: 0x34, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::Win32_MIBICMPSTATS OutStats; // 0x44 (size: 0x34, flags: 0x6, type: 0x11)
	}; // size = 0x78
}
