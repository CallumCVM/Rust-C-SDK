#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\UnityEngine\UI\LayoutElement.h"
#include "..\UnityEngine\UI\Text.h"

namespace Rust
{
	namespace UI
{
{
		namespace Debug
{
	class NetGraphItem : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::CanvasGroup* group; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::LayoutElement* element; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* countTotal; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* label; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* bytes; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x40
}
