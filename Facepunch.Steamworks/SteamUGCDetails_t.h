#pragma once

#include "..\SteamNative\Result.h"
#include "..\SteamNative\WorkshopFileType.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\SteamNative\RemoteStoragePublishedFileVisibility.h"

namespace SteamNative
{
	class SteamUGCDetails_t : public ValueType // 0x0
	{
	public:
		unsigned __int64 PublishedFileId; // 0x10 (size: 0x8, flags: 0x6, type: 0xb)
		SteamNative::Result Result; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		SteamNative::WorkshopFileType FileType; // 0x1c (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int CreatorAppID; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int ConsumerAppID; // 0x24 (size: 0x4, flags: 0x6, type: 0x9)
		UnityEngine::UnicodeString* Title; // 0x28 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* Description; // 0x30 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned __int64 SteamIDOwner; // 0x38 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned int TimeCreated; // 0x40 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int TimeUpdated; // 0x44 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int TimeAddedToUserList; // 0x48 (size: 0x4, flags: 0x6, type: 0x9)
		SteamNative::RemoteStoragePublishedFileVisibility Visibility; // 0x4c (size: 0x4, flags: 0x6, type: 0x11)
		bool Banned; // 0x50 (size: 0x1, flags: 0x1006, type: 0x2)
		bool AcceptedForUse; // 0x51 (size: 0x1, flags: 0x1006, type: 0x2)
		bool TagsTruncated; // 0x52 (size: 0x1, flags: 0x1006, type: 0x2)
		UnityEngine::UnicodeString* Tags; // 0x58 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned __int64 File; // 0x60 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned __int64 PreviewFile; // 0x68 (size: 0x8, flags: 0x6, type: 0xb)
		UnityEngine::UnicodeString* PchFileName; // 0x70 (size: 0x8, flags: 0x1006, type: 0xe)
		int FileSize; // 0x78 (size: 0x4, flags: 0x6, type: 0x8)
		int PreviewFileSize; // 0x7c (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* URL; // 0x80 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned int VotesUp; // 0x88 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int VotesDown; // 0x8c (size: 0x4, flags: 0x6, type: 0x9)
		float Score; // 0x90 (size: 0x4, flags: 0x6, type: 0xc)
		unsigned int NumChildren; // 0x94 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x98
}
