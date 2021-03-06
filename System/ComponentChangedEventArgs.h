#pragma once

#include "..\System\Object.h"
#include "..\System\ComponentModel\MemberDescriptor.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class ComponentChangedEventArgs : public EventArgs // 0x0
	{
	public:
		System::Object component; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::ComponentModel::MemberDescriptor* member; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object oldValue; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object newValue; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x30
}
