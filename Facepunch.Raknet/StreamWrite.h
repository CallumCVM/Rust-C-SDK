#pragma once

#include "..\Facepunch\Network\Raknet\Peer.h"

namespace Facepunch
{
	namespace Network
{
{
		namespace Raknet
{
	class StreamWrite : public Write // 0x18
	{
	public:
		Facepunch::Network::Raknet::Peer* peer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
