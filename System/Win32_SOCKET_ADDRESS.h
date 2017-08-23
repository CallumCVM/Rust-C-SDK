#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_SOCKET_ADDRESS : public ValueType // 0x0
	{
	public:
		__int64 Sockaddr; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		int SockaddrLength; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
