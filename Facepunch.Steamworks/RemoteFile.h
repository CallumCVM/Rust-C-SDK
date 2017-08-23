#pragma once

#include "..\Facepunch\Steamworks\RemoteStorage.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\SteamNative\UGCHandle_t.h"

namespace Facepunch
{
	namespace Steamworks
{
	class RemoteFile : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::RemoteStorage* remoteStorage; // 0x10 (size: 0x8, flags: 0x23, type: 0x12)
		UnityEngine::UnicodeString* _fileName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* _downloadedData; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _isUgc; // 0x28 (size: 0x1, flags: 0x21, type: 0x2)
		int _sizeInBytes; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		SteamNative::UGCHandle_t _handle; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
		unsigned __int64 _ownerId; // 0x38 (size: 0x8, flags: 0x1, type: 0xb)
		bool _isDownloading; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool <Exists>k__BackingField; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
