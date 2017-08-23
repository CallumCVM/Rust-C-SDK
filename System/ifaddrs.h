#pragma once

#include "..\UnityEngine\UnicodeString*.h"

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
	class ifaddrs : public ValueType // 0x0
	{
	public:
		__int64 ifa_next; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		UnityEngine::UnicodeString* ifa_name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int ifa_flags; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		__int64 ifa_addr; // 0x28 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 ifa_netmask; // 0x30 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 ifa_dstaddr; // 0x38 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 ifa_data; // 0x40 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x48
}
