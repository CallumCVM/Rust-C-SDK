#pragma once

#include "..\Network\Visibility\Provider.h"

namespace Network
{
	namespace Visibility
{
	class Manager : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<unsigned int,Network.Visibility.Group> groups; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		Network::Visibility::Provider* provider; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x20
}
