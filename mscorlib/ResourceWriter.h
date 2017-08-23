#pragma once

#include "..\System\Collections\SortedList.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace Resources
{
	class ResourceWriter : public Object // 0x0
	{
	public:
		System::Collections::SortedList* resources; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
