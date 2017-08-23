#pragma once

#include "..\System\UInt16.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_SOCKADDR : public ValueType // 0x0
	{
	public:
		System::UInt16 AddressFamily; // 0x10 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned char* AddressData; // 0x18 (size: 0x8, flags: 0x1006, type: 0x1d)
	}; // size = 0x20
}
