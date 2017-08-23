#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\GameObject.h"
#include "..\Rust\UI\Debug\NetGraphItem.h"

namespace Rust
{
	namespace UI
{
{
		namespace Debug
{
	class NetGraphRow : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::CanvasGroup* group; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* countTotal; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* countUnique; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* label; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* bytes; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* RowContainer; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::UI::Debug::NetGraphItem* Items; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* RowSpacer; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x58
}
