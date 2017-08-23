#pragma once

#include "..\UnityEngine\CanvasGroup.h"
#include "..\Rust\UI\Debug\NetGraphRow.h"

namespace Rust
{
	namespace UI
{
{
		namespace Debug
{
	class NetGraph : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::CanvasGroup* group; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::UI::Debug::NetGraphRow* rows; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
