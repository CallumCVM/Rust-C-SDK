#pragma once

#include "..\Network\Visibility\Manager.h"
#include "..\Network\Connection.h"
#include "..\UnityEngine\List.h"

namespace Network
{
	namespace Visibility
{
	class Subscriber : public Object // 0x0
	{
	public:
		Network::Visibility::Manager* manager; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		Network::Connection* connection; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<Network.Visibility.Group>* subscribed; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x28
}
