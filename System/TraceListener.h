#pragma once

#include "..\System\Collections\Specialized\StringDictionary.h"
#include "..\System\Diagnostics\TraceFilter.h"
#include "..\System\Diagnostics\TraceOptions.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class TraceListener : public MarshalByRefObject // 0x18
	{
	public:
		System::Collections::Specialized::StringDictionary* attributes; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::TraceFilter* filter; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		int indentLevel; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int indentSize; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		System::Diagnostics::TraceOptions options; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		bool needIndent; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
