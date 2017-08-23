#pragma once

#include "..\System\Action.h"

namespace Rust
{
	namespace Workshop
{
	class WorkshopSkin : public MonoBehaviour // 0x18
	{
	public:
		System::Action* OnRefresh; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
