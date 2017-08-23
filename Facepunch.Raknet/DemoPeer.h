#pragma once

namespace Facepunch
{
	namespace Network
{
{
		namespace Raknet
{
	class DemoPeer : public Peer // 0x18
	{
	public:
		unsigned char* Packet; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		int Position; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
