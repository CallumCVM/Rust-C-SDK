#pragma once

#include "..\System\Runtime\InteropServices\CallingConvention.h"
#include "..\System\Runtime\InteropServices\CharSet.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class UnmanagedFunctionPointerAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::InteropServices::CallingConvention call_conv; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::InteropServices::CharSet CharSet; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		bool SetLastError; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		bool BestFitMapping; // 0x19 (size: 0x1, flags: 0x6, type: 0x2)
		bool ThrowOnUnmappableChar; // 0x1a (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
