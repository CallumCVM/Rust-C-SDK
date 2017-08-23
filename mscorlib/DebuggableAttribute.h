#pragma once

#include "..\System\Diagnostics\DebuggableAttribute\DebuggingModes.h"

namespace System
{
	namespace Diagnostics
{
	class DebuggableAttribute : public Attribute // 0x0
	{
	public:
		bool JITTrackingEnabledFlag; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool JITOptimizerDisabledFlag; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		System::Diagnostics::DebuggableAttribute::DebuggingModes debuggingModes; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
