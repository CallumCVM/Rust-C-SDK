#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\UnityEngine\List.h"
#include "..\System\Action.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Steamworks\ServerList\Filter.h"

namespace rust 
{
	class Request : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<Facepunch.Steamworks.ServerList.Request.SubRequest>* Requests; // 0x18 (size: 0x8, flags: 0x3, type: 0x15)
		System::Action* OnUpdate; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<Facepunch.Steamworks.ServerList.Server>* Responded; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<Facepunch.Steamworks.ServerList.Server>* Unresponsive; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		System.Collections.Generic.IEnumerable<UnityEngine::UnicodeString*> <ServerList>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		Facepunch::Steamworks::ServerList::Filter* <Filter>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		bool Finished; // 0x48 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x50
}
