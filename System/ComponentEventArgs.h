#pragma once

#include "..\System\ComponentModel\IComponent.h"

namespace System
{
	namespace ComponentModel
{
{
		namespace Design
{
	class ComponentEventArgs : public EventArgs // 0x0
	{
	public:
		System::ComponentModel::IComponent* icomp; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
