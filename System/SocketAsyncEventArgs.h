#pragma once

#include "..\System\Net\Sockets\Socket.h"
#include "..\System\EventHandler<System\Net\Sockets\SocketAsyncEventArgs>.h"
#include "..\System\Net\Sockets\SocketAsyncOperation.h"
#include "..\System\Net\EndPoint.h"
#include "..\System\Net\Sockets\IPPacketInformation.h"
#include "..\System\Net\Sockets\SendPacketsElement.h"
#include "..\System\Net\Sockets\TransmitFileOptions.h"
#include "..\System\Net\Sockets\SocketError.h"
#include "..\System\Net\Sockets\SocketFlags.h"
#include "..\System\Object.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class SocketAsyncEventArgs : public EventArgs // 0x0
	{
	public:
		System.Collections.Generic.IList<System.ArraySegment<unsigned char>> _bufferList; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Net::Sockets::Socket* curSocket; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler<System::Net::Sockets::SocketAsyncEventArgs> Completed; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Net::Sockets::Socket* <AcceptSocket>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* <Buffer>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::EndPoint* <RemoteEndPoint>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Sockets::IPPacketInformation <ReceiveMessageFromPacketInfo>k__BackingField; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		System::Net::Sockets::SendPacketsElement* <SendPacketsElements>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object <UserToken>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x1c)
		int <BytesTransferred>k__BackingField; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int <Count>k__BackingField; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		bool <DisconnectReuseSocket>k__BackingField; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		System::Net::Sockets::SocketAsyncOperation <LastOperation>k__BackingField; // 0x6c (size: 0x4, flags: 0x1, type: 0x11)
		int <Offset>k__BackingField; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		System::Net::Sockets::TransmitFileOptions <SendPacketsFlags>k__BackingField; // 0x74 (size: 0x4, flags: 0x1, type: 0x11)
		int <SendPacketsSendSize>k__BackingField; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		System::Net::Sockets::SocketError <SocketError>k__BackingField; // 0x7c (size: 0x4, flags: 0x1, type: 0x11)
		System::Net::Sockets::SocketFlags <SocketFlags>k__BackingField; // 0x80 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x88
}
