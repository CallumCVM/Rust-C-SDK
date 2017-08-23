#pragma once

#include "..\Network\Connection.h"
#include "..\Network\Visibility\Group.h"
#include "..\Network\Visibility\Subscriber.h"
#include "..\UnityEngine\MonoBehaviour.h"
#include "..\Network\Server.h"
#include "..\Network\Client.h"
#include "..\UnityEngine\List.h"
#include "..\System\Action.h"
#include "..\System\Action<Network\Visibility\Group>.h"

namespace Network
{
	class Networkable : public Object // 0x0
	{
	public:
		Network::Connection* <connection>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Network::Visibility::Group* group; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Visibility::Subscriber* subscriber; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::MonoBehaviour* owner; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Network::Server* sv; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		Network::Client* cl; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		System.Action<UnityEngine::List<Network.Connection>>* OnSubscribersAdded; // 0x40 (size: 0x8, flags: 0x6, type: 0x15)
		System.Action<UnityEngine::List<Network.Connection>>* OnSubscribersRemoved; // 0x48 (size: 0x8, flags: 0x6, type: 0x15)
		System::Action* OnGroupChanged; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action<Network::Visibility::Group> OnLeaveGroup; // 0x58 (size: 0x8, flags: 0x6, type: 0x15)
		System::Action<Network::Visibility::Group> OnEnterGroup; // 0x60 (size: 0x8, flags: 0x6, type: 0x15)
		unsigned int ID; // 0x68 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x70
}
