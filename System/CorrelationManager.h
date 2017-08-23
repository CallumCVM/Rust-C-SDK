#pragma once

#include "..\System\Guid.h"
#include "..\System\Collections\Stack.h"

namespace System
{
	namespace Diagnostics
{
	class CorrelationManager : public Object // 0x0
	{
	public:
		System::Collections::Stack* op_stack; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Guid activity; // 0x18 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
