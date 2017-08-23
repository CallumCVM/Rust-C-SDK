#pragma once

#include "..\System\Runtime\InteropServices\ComInterfaceType.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class InterfaceTypeAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::InteropServices::ComInterfaceType intType; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
