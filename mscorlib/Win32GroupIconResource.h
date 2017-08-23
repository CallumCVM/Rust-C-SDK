#pragma once

#include "..\System\Resources\Win32IconResource.h"

namespace System
{
	namespace Resources
{
	class Win32GroupIconResource : public Win32Resource // 0x28
	{
	public:
		System::Resources::Win32IconResource* icons; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x30
}
