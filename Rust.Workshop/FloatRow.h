#pragma once

#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\UI\Slider.h"

namespace Rust
{
	namespace Workshop
{
{
		namespace Editor
{
	class FloatRow : public MaterialRow // 0x20
	{
	public:
		UnityEngine::UI::Button* Reset; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Slider* Slider; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		float Default; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x38
}
