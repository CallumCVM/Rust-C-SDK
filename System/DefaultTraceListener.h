#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class DefaultTraceListener : public TraceListener // 0x40
	{
	public:
		UnityEngine::UnicodeString* logFileName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		bool assertUiEnabled; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
