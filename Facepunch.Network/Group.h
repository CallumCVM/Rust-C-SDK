#pragma once

#include "..\Network\Visibility\Manager.h"
#include "..\UnityEngine\Bounds.h"
#include "..\System\Collections\Generic\HashSet<Network\Networkable>.h"
#include "..\UnityEngine\List.h"

namespace Network
{
	namespace Visibility
{
	class Group : public Object // 0x0
	{
	public:
		Network::Visibility::Manager* manager; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Collections::Generic::HashSet<Network::Networkable> networkables; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<Network.Connection>* subscribers; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		unsigned int ID; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::Bounds bounds; // 0x2c (size: 0x18, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
