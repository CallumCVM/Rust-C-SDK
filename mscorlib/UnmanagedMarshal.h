#pragma once

#include "..\System\Runtime\InteropServices\UnmanagedType.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class UnmanagedMarshal : public Object // 0x0
	{
	public:
		int count; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		System::Runtime::InteropServices::UnmanagedType t; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::InteropServices::UnmanagedType tbase; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* guid; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* mcookie; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* marshaltype; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* marshaltyperef; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int param_num; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		bool has_size; // 0x44 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
