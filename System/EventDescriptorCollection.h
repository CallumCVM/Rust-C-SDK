#pragma once

#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace ComponentModel
{
	class EventDescriptorCollection : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* eventList; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool isReadOnly; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
