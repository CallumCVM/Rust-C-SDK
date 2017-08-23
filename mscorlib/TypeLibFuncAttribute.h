#pragma once

#include "..\System\Runtime\InteropServices\TypeLibFuncFlags.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class TypeLibFuncAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::InteropServices::TypeLibFuncFlags flags; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
