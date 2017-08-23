#pragma once

#include "..\UnityEngine\GameObject.h"
#include "Skinnable.h"
#include "..\Rust\Workshop\Skin.h"
#include "..\UnityEngine\UI\Dropdown.h"
#include "..\UnityEngine\UI\InputField.h"
#include "..\Rust\Workshop\WorkshopViewmodelControls.h"
#include "..\UnityEngine\UI\Toggle.h"

namespace Rust
{
	namespace Workshop
{
	class WorkshopItemEditor : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::GameObject* <Prefab>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* <AltPrefab>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::GameObject* <ViewModel>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Skinnable* <Skinnable>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Rust::Workshop::Skin* <Skin>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UI::Dropdown* ItemTypeSelector; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* ItemTitleLabel; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::Workshop::WorkshopViewmodelControls* ViewmodelControls; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* MaterialTabHolder; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* FileDialogObject; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* EditorElements; // 0x68 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* ClothOnlyElements; // 0x70 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UI::Toggle* MaterialTabs; // 0x78 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned __int64 <ItemId>k__BackingField; // 0x80 (size: 0x8, flags: 0x1, type: 0xb)
		int EditingMaterial; // 0x88 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x90
}
