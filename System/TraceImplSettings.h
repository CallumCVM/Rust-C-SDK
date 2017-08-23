#pragma once

#include "..\System\Diagnostics\TraceListenerCollection.h"

namespace System
{
	namespace Diagnostics
{
	class TraceImplSettings : public Object // 0x0
	{
	public:
		System::Diagnostics::TraceListenerCollection* Listeners; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		bool AutoFlush; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		int IndentLevel; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int IndentSize; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
