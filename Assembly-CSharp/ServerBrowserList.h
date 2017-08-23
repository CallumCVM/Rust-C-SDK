#pragma once

#include "..\ServerBrowserList\ServerKeyvalues.h"
#include "..\Facepunch\Steamworks\ServerList\Request.h"
#include "ServerBrowserCategory.h"
#include "ServerBrowserItem.h"
#include "..\ServerBrowserList\Rules.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class ServerBrowserList : public BaseMonoBehaviour // 0x18
	{
	public:
		ServerBrowserList::ServerKeyvalues* keyValues; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		Facepunch::Steamworks::ServerList::Request* Request; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		ServerBrowserCategory* categoryButton; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		ServerBrowserItem* itemTemplate; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		ServerBrowserList::Rules* rules; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* searchFilter; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* mapFilter; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::List<Facepunch.Steamworks.ServerList.Server>* serverList; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* sortOrder; // 0x58 (size: 0x8, flags: 0x3, type: 0xe)
		QueryType queryType; // 0x60 (size: 0x4, flags: 0x6, type: 0x11)
		int servers; // 0x64 (size: 0x4, flags: 0x3, type: 0x8)
		int players; // 0x68 (size: 0x4, flags: 0x3, type: 0x8)
		bool shouldShowSecureServers; // 0x6c (size: 0x1, flags: 0x86, type: 0x2)
		bool startActive; // 0x6d (size: 0x1, flags: 0x6, type: 0x2)
		int refreshOrder; // 0x70 (size: 0x4, flags: 0x6, type: 0x8)
		bool UseOfficialServers; // 0x74 (size: 0x1, flags: 0x6, type: 0x2)
		bool isDirty; // 0x75 (size: 0x1, flags: 0x3, type: 0x2)
		bool showFull; // 0x76 (size: 0x1, flags: 0x1, type: 0x2)
		bool showEmpty; // 0x77 (size: 0x1, flags: 0x1, type: 0x2)
		float nextRebuild; // 0x78 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x80
}
