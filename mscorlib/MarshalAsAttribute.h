#pragma once

#include "..\System\Runtime\InteropServices\UnmanagedType.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Runtime\InteropServices\VarEnum.h"
#include "..\System\Int16.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class MarshalAsAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::InteropServices::UnmanagedType utype; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::InteropServices::UnmanagedType ArraySubType; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* MarshalCookie; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* MarshalType; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System::Type* MarshalTypeRef; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Runtime::InteropServices::VarEnum SafeArraySubType; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		int SizeConst; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
		System::Int16 SizeParamIndex; // 0x38 (size: 0x2, flags: 0x6, type: 0x6)
		System::Type* SafeArrayUserDefinedSubType; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		int IidParameterIndex; // 0x48 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x50
}
