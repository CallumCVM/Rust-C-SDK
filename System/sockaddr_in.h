#pragma once

#include "..\System\UInt16.h"

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
	class sockaddr_in : public ValueType // 0x0
	{
	public:
		unsigned char sin_len; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char sin_family; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
		System::UInt16 sin_port; // 0x12 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned int sin_addr; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
