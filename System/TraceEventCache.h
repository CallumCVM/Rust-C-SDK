#pragma once

#include "..\System\DateTime.h"
#include "..\System\Diagnostics\CorrelationManager.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class TraceEventCache : public Object // 0x0
	{
	public:
		System::Diagnostics::CorrelationManager* manager; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* callstack; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* thread; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::DateTime started; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
		int process; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 timestamp; // 0x40 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x48
}
