#pragma once

#include "..\System\Reflection\MethodBase.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class StackFrame : public Object // 0x0
	{
	public:
		int ilOffset; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int nativeOffset; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::MethodBase* methodBase; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* fileName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int lineNumber; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int columnNumber; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* internalMethodName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
