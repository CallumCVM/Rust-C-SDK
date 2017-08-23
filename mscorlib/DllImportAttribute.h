#pragma once

#include "..\System\Runtime\InteropServices\CallingConvention.h"
#include "..\System\Runtime\InteropServices\CharSet.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class DllImportAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::InteropServices::CallingConvention CallingConvention; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		System::Runtime::InteropServices::CharSet CharSet; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* Dll; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* EntryPoint; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		bool ExactSpelling; // 0x28 (size: 0x1, flags: 0x6, type: 0x2)
		bool PreserveSig; // 0x29 (size: 0x1, flags: 0x6, type: 0x2)
		bool SetLastError; // 0x2a (size: 0x1, flags: 0x6, type: 0x2)
		bool BestFitMapping; // 0x2b (size: 0x1, flags: 0x6, type: 0x2)
		bool ThrowOnUnmappableChar; // 0x2c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x30
}
