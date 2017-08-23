#pragma once

#include "..\SteamNative\UGCQueryHandle_t.h"
#include "..\SteamNative\CallbackHandle.h"
#include "..\Facepunch\Steamworks\Workshop\QueryType.h"
#include "..\Facepunch\Steamworks\Workshop\Order.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Steamworks\Workshop\Item.h"
#include "..\Facepunch\Steamworks\Workshop\UserQueryType.h"
#include "..\System\Action<Facepunch\Steamworks\Workshop\Query>.h"
#include "..\Facepunch\Steamworks\Workshop.h"
#include "..\Facepunch\Steamworks\Friends.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class Query : public Object // 0x0
	{
	public:
		SteamNative::CallbackHandle* Callback; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString* <SearchText>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		Facepunch::Steamworks::Workshop::Item* <Items>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Action<Facepunch::Steamworks::Workshop::Query> OnResult; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		Facepunch::Steamworks::Workshop* workshop; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		Facepunch::Steamworks::Friends* friends; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<Facepunch.Steamworks.Workshop.Item>* _results; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine::UnicodeString*>* <RequireTags>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine::UnicodeString*>* <ExcludeTags>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<unsigned __int64>* <FileId>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		SteamNative::UGCQueryHandle_t Handle; // 0x60 (size: 0x8, flags: 0x3, type: 0x11)
		unsigned int <AppId>k__BackingField; // 0x68 (size: 0x4, flags: 0x1, type: 0x9)
		unsigned int <UploaderAppId>k__BackingField; // 0x6c (size: 0x4, flags: 0x1, type: 0x9)
		Facepunch::Steamworks::Workshop::QueryType <QueryType>k__BackingField; // 0x70 (size: 0x4, flags: 0x1, type: 0x11)
		Facepunch::Steamworks::Workshop::Order <Order>k__BackingField; // 0x74 (size: 0x4, flags: 0x1, type: 0x11)
		int <TotalResults>k__BackingField; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		System.Nullable<unsigned __int64> <UserId>k__BackingField; // 0x80 (size: 0x10, flags: 0x1, type: 0x15)
		int <RankedByTrendDays>k__BackingField; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		Facepunch::Steamworks::Workshop::UserQueryType <UserQueryType>k__BackingField; // 0x94 (size: 0x4, flags: 0x1, type: 0x11)
		int <Page>k__BackingField; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		int <PerPage>k__BackingField; // 0x9c (size: 0x4, flags: 0x1, type: 0x8)
		int _resultPage; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
		int _resultsRemain; // 0xa4 (size: 0x4, flags: 0x1, type: 0x8)
		int _resultSkip; // 0xa8 (size: 0x4, flags: 0x1, type: 0x8)
		bool <RequireAllTags>k__BackingField; // 0xac (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xb0
}
