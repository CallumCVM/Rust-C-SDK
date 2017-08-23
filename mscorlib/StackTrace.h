#pragma once

#include "..\System\Diagnostics\StackFrame.h"

namespace System
{
	namespace Diagnostics
{
	class StackTrace : public Object // 0x0
	{
	public:
		System::Diagnostics::StackFrame* frames; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		bool debug_info; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
