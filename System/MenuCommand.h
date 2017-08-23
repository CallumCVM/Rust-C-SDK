#pragma once

#include "..\System\EventHandler.h"
#include "..\System\ComponentModel\Design\CommandID.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class MenuCommand : public Object // 0x0
	{
	public:
		System::EventHandler* handler; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::Design::CommandID* command; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* properties; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* CommandChanged; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool ischecked; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool enabled; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		bool issupported; // 0x32 (size: 0x1, flags: 0x1, type: 0x2)
		bool visible; // 0x33 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
