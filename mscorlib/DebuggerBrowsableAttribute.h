#pragma once

#include "..\System\Diagnostics\DebuggerBrowsableState.h"

namespace System
{
	namespace Diagnostics
{
	class DebuggerBrowsableAttribute : public Attribute // 0x0
	{
	public:
		System::Diagnostics::DebuggerBrowsableState state; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
