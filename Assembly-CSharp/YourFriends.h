#pragma once

#include "..\UnityEngine\Transform.h"
#include "MenuFriendPanel.h"

namespace rust 
{
	class YourFriends : public BaseMonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* PanelList; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MenuFriendPanel* FriendPanels; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
