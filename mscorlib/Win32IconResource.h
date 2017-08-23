#pragma once

#include "..\System\Resources\ICONDIRENTRY.h"

namespace System
{
	namespace Resources
{
	class Win32IconResource : public Win32Resource // 0x28
	{
	public:
		System::Resources::ICONDIRENTRY* icon; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
