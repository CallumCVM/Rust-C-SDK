#pragma once

#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\UI\Slider.h"
#include "..\UnityEngine\Color.h"

namespace Rust
{
	namespace Workshop
{
{
		namespace Editor
{
	class ColorRow : public MaterialRow // 0x20
	{
	public:
		UnityEngine::UI::Button* Reset; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Slider* Red; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Slider* Green; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Slider* Blue; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Color Default; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
