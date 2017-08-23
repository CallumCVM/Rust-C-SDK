#pragma once

#include "..\System\ComponentModel\EventHandlerList.h"
#include "..\System\ComponentModel\ISite.h"
#include "..\System\Object.h"

namespace System
{
	namespace ComponentModel
{
	class Component : public MarshalByRefObject // 0x18
	{
	public:
		System::ComponentModel::EventHandlerList* event_handlers; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::ISite* mySite; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object disposedEvent; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x30
}
