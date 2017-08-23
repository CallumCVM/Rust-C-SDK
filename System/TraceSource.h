#pragma once

#include "..\System\Diagnostics\SourceSwitch.h"
#include "..\System\Diagnostics\TraceListenerCollection.h"

namespace System
{
	namespace Diagnostics
{
	class TraceSource : public Object // 0x0
	{
	public:
		System::Diagnostics::SourceSwitch* source_switch; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::TraceListenerCollection* listeners; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
