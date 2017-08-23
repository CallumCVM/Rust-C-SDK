#pragma once

#include "..\Facepunch\Steamworks\Networking.h"
#include "..\Facepunch\Steamworks\Inventory.h"
#include "..\Facepunch\Steamworks\Workshop.h"
#include "..\System\Action.h"
#include "..\Facepunch\Steamworks\Interop\NativeInterface.h"
#include "..\UnityEngine\List.h"

namespace Facepunch
{
	namespace Steamworks
{
	class BaseSteamworks : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Networking* <Networking>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Inventory* <Inventory>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Workshop* <Workshop>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Action* OnUpdate; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Interop::NativeInterface* native; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<SteamNative.CallbackHandle>* CallbackHandles; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		unsigned int <AppId>k__BackingField; // 0x40 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x48
}
