#pragma once

#include "..\UnityEngine\UI\Toggle.h"

namespace Rust
{
	namespace Workshop
{
	class WorkshopViewmodelControls : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Toggle* Enabled; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Toggle* Ironsights; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
