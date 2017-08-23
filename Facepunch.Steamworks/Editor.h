#pragma once

#include "..\Facepunch\Steamworks\Workshop.h"
#include "..\SteamNative\CallbackHandle.h"
#include "..\SteamNative\UGCUpdateHandle_t.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"
#include "..\System\Nullable<Facepunch\Steamworks\Workshop\ItemType>.h"
#include "..\System\Nullable<Facepunch\Steamworks\Workshop\Editor\VisibilityType>.h"

namespace rust 
{
	class Editor : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Workshop* workshop; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::CallbackHandle* CreateItem; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		SteamNative::CallbackHandle* SubmitItemUpdate; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::UnicodeString* <Title>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Description>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Folder>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <PreviewImage>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::List<UnityEngine::UnicodeString*>* <Tags>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* <Error>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <ChangeNote>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		SteamNative::UGCUpdateHandle_t UpdateHandle; // 0x60 (size: 0x8, flags: 0x3, type: 0x11)
		unsigned __int64 <Id>k__BackingField; // 0x68 (size: 0x8, flags: 0x1, type: 0xb)
		bool <Publishing>k__BackingField; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		System::Nullable<Facepunch::Steamworks::Workshop::ItemType> <Type>k__BackingField; // 0x74 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Facepunch::Steamworks::Workshop::Editor::VisibilityType> <Visibility>k__BackingField; // 0x7c (size: 0x8, flags: 0x1, type: 0x15)
		bool <NeedToAgreeToWorkshopLegal>k__BackingField; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x88
}
