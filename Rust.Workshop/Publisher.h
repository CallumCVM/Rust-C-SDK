#pragma once

#include "..\UnityEngine\UI\InputField.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\Texture2D.h"
#include "Skinnable.h"
#include "..\Rust\Workshop\Skin.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\GameObject.h"

namespace Rust
{
	namespace Workshop
{
{
		namespace Editor
{
	class Publisher : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::InputField* ChangeLog; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* PublishButton; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* IconBackground; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Skinnable* Skinnable; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Rust::Workshop::Skin* Skin; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* Title; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::GameObject* Prefab; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned __int64 ItemId; // 0x50 (size: 0x8, flags: 0x1, type: 0xb)
	}; // size = 0x58
}
