#pragma once

#include "..\Facepunch\Steamworks\Client.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Overlay : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x18
}
