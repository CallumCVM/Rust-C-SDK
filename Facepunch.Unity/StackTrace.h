#pragma once

#include "..\Facepunch\Report\StackTrace\StackFrame.h"

namespace rust 
{
	class StackTrace : public Object // 0x0
	{
	public:
		Facepunch::Report::StackTrace::StackFrame* <frames>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x18
}
