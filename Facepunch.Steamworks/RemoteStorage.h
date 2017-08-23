#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\SteamNative\SteamRemoteStorage.h"
#include "..\UnityEngine\List.h"

namespace Facepunch
{
	namespace Steamworks
{
	class RemoteStorage : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::SteamRemoteStorage* native; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<Facepunch.Steamworks.RemoteFile>* _files; // 0x20 (size: 0x8, flags: 0x21, type: 0x15)
		bool _filesInvalid; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
