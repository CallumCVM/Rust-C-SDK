#pragma once

#include "..\Facepunch\Steamworks\Workshop.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"
#include "..\System\IO\DirectoryInfo.h"

namespace rust 
{
	class Item : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Workshop* workshop; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString* <Description>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** <Tags>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* <Title>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::DirectoryInfo* _directory; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <PreviewImageUrl>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _ownerName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned __int64 <Id>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 <OwnerId>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0xb)
		float <Score>k__BackingField; // 0x58 (size: 0x4, flags: 0x1, type: 0xc)
		unsigned int <VotesDown>k__BackingField; // 0x5c (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int <VotesUp>k__BackingField; // 0x60 (size: 0x4, flags: 0x1, type: 0x9)
		System::DateTime <Modified>k__BackingField; // 0x68 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime <Created>k__BackingField; // 0x78 (size: 0x10, flags: 0x1, type: 0x11)
		unsigned __int64 <Size>k__BackingField; // 0x88 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 _BytesDownloaded; // 0x90 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 _BytesTotal; // 0x98 (size: 0x8, flags: 0x1, type: 0xb)
		int YourVote; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
		int <SubscriptionCount>k__BackingField; // 0xa4 (size: 0x4, flags: 0x1, type: 0x8)
		int <FavouriteCount>k__BackingField; // 0xa8 (size: 0x4, flags: 0x1, type: 0x8)
		int <FollowerCount>k__BackingField; // 0xac (size: 0x4, flags: 0x1, type: 0x8)
		int <WebsiteViews>k__BackingField; // 0xb0 (size: 0x4, flags: 0x1, type: 0x8)
		int <ReportScore>k__BackingField; // 0xb4 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xb8
}
