#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UI\Toggle.h"

namespace Rust
{
	namespace UI
{
{
		namespace Utility
{
	class ToggleGameObject : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* Target; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Toggle* component; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
