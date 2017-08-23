#pragma once

#include "..\System\Reflection\Assembly.h"

namespace System
{
	class AssemblyLoadEventArgs : public EventArgs // 0x0
	{
	public:
		System::Reflection::Assembly* m_loadedAssembly; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
