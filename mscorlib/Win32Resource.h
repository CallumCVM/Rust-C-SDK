#pragma once

#include "..\System\Resources\NameOrId.h"

namespace System
{
	namespace Resources
{
	class Win32Resource : public Object // 0x0
	{
	public:
		System::Resources::NameOrId* type; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Resources::NameOrId* name; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int language; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
