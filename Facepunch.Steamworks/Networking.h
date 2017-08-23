#pragma once

#include "..\Facepunch\Steamworks\Networking\OnRecievedP2PData.h"
#include "..\UnityEngine\List.h"
#include "..\System\Diagnostics\Stopwatch.h"
#include "..\SteamNative\SteamNetworking.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Networking : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Networking::OnRecievedP2PData* OnP2PData; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System.Func<unsigned __int64,bool> OnIncomingConnection; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
		System.Action<unsigned __int64,Facepunch.Steamworks.Networking.SessionError> OnConnectionFailed; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<int>* ListenChannels; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System::Diagnostics::Stopwatch* UpdateTimer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		SteamNative::SteamNetworking* networking; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x40
}
