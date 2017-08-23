#pragma once

#include "..\Facepunch\Steamworks\RemoteStorage.h"
#include "..\SteamNative\UGCFileWriteStreamHandle_t.h"
#include "..\Facepunch\Steamworks\RemoteFile.h"

namespace Facepunch
{
	namespace Steamworks
{
	class RemoteFileWriteStream : public Stream // 0x18
	{
	public:
		Facepunch::Steamworks::RemoteStorage* remoteStorage; // 0x18 (size: 0x8, flags: 0x23, type: 0x12)
		Facepunch::Steamworks::RemoteFile* _file; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		SteamNative::UGCFileWriteStreamHandle_t _handle; // 0x28 (size: 0x8, flags: 0x21, type: 0x11)
		int _written; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		bool _closed; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
