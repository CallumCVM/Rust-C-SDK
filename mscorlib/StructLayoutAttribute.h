#pragma once

#include "..\System\Runtime\InteropServices\CharSet.h"
#include "..\System\Runtime\InteropServices\LayoutKind.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class StructLayoutAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::InteropServices::CharSet CharSet; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		int Pack; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int Size; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		System::Runtime::InteropServices::LayoutKind lkind; // 0x1c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
