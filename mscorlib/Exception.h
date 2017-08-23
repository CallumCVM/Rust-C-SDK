#pragma once

#include "..\System\Exception.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\IDictionary.h"

namespace System
{
	class Exception : public Object // 0x0
	{
	public:
		__int64* trace_ips; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Exception* inner_exception; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* message; // 0x20 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* help_link; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* class_name; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* stack_trace; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _remoteStackTraceString; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		int remote_stack_index; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		int hresult; // 0x4c (size: 0x4, flags: 0x3, type: 0x8)
		UnityEngine::UnicodeString* source; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::IDictionary* _data; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
