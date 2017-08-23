#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class DelimitedListTraceListener : public TextWriterTraceListener // 0x48
	{
	public:
		UnityEngine::UnicodeString* delimiter; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
