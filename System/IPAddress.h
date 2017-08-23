#pragma once

#include "..\System\Net\Sockets\AddressFamily.h"
#include "..\System\UInt16.h"

namespace System
{
	namespace Net
{
	class IPAddress : public Object // 0x0
	{
	public:
		System::UInt16* m_Numbers; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		__int64 m_Address; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
		System::Net::Sockets::AddressFamily m_Family; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		__int64 m_ScopeId; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		int m_HashCode; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
