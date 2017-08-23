#pragma once

#include "..\UnityEngine\UI\Toggle.h"

namespace Rust
{
	namespace UI
{
{
		namespace Utility
{
	class ForceWeather : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Toggle* component; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool Rain; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool Fog; // 0x21 (size: 0x1, flags: 0x6, type: 0x2)
		bool Wind; // 0x22 (size: 0x1, flags: 0x6, type: 0x2)
		bool Clouds; // 0x23 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
