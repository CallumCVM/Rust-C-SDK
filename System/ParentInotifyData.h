#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\IO\InotifyData.h"

namespace System
{
	namespace IO
{
	class ParentInotifyData : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* children; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::IO::InotifyData* data; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		bool IncludeSubdirs; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool Enabled; // 0x21 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
