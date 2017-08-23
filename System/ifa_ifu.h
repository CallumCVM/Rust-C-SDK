#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class ifa_ifu : public ValueType // 0x0
	{
	public:
		__int64 ifu_broadaddr; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 ifu_dstaddr; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
	}; // size = 0x18
}
