#pragma once

#include "..\SteamNative\Result.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\SteamNative\RemoteStoragePublishedFileVisibility.h"
#include "..\SteamNative\WorkshopFileType.h"

namespace SteamNative
{
	class RemoteStorageGetPublishedFileDetailsResult_t : public ValueType // 0x0
	{
	public:
		SteamNative::Result Result; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned __int64 PublishedFileId; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int CreatorAppID; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int ConsumerAppID; // 0x24 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::UnicodeString* Title; // 0x28 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* Description; // 0x30 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned __int64 File; // 0x38 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 PreviewFile; // 0x40 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 SteamIDOwner; // 0x48 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int TimeCreated; // 0x50 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int TimeUpdated; // 0x54 (size: 0x4, flags: 0x6, type: 0x9)
		SteamNative::RemoteStoragePublishedFileVisibility Visibility; // 0x58 (size: 0x4, flags: 0x6, type: 0x11)
		bool Banned; // 0x5c (size: 0x1, flags: 0x1006, type: 0x2)
		UnityEngine::UnicodeString* Tags; // 0x60 (size: 0x8, flags: 0x1006, type: 0xe)
		bool TagsTruncated; // 0x68 (size: 0x1, flags: 0x1006, type: 0x2)
		UnityEngine::UnicodeString* PchFileName; // 0x70 (size: 0x8, flags: 0x1006, type: 0xe)
		int FileSize; // 0x78 (size: 0x4, flags: 0x6, type: 0x8)
		int PreviewFileSize; // 0x7c (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* URL; // 0x80 (size: 0x8, flags: 0x1006, type: 0xe)
		SteamNative::WorkshopFileType FileType; // 0x88 (size: 0x4, flags: 0x6, type: 0x11)
		bool AcceptedForUse; // 0x8c (size: 0x1, flags: 0x1006, type: 0x2)
	}; // size = 0x90
}
