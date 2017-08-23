#pragma once

#include "..\System\UInt16.h"
#include "..\System\Net\NetworkInformation\MacOsStructs\in6_addr.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
{
{
			namespace MacOsStructs
{
	class sockaddr_in6 : public ValueType // 0x0
	{
	public:
		unsigned char sin6_len; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char sin6_family; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
		System::UInt16 sin6_port; // 0x12 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned int sin6_flowinfo; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		System::Net::NetworkInformation::MacOsStructs::in6_addr sin6_addr; // 0x18 (size: 0x8, flags: 0x6, type: 0x11)
		unsigned int sin6_scope_id; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
