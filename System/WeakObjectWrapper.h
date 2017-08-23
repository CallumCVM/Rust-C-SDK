#pragma once

#include "..\System\WeakReference.h"

namespace System
{
	namespace ComponentModel
{
	class WeakObjectWrapper : public Object // 0x0
	{
	public:
		System::WeakReference* <Weak>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int <TargetHashCode>k__BackingField; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
