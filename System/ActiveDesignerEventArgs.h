#pragma once

#include "..\System\ComponentModel\Design\IDesignerHost.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class ActiveDesignerEventArgs : public EventArgs // 0x0
	{
	public:
		System::ComponentModel::Design::IDesignerHost* oldDesigner; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::ComponentModel::Design::IDesignerHost* newDesigner; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
