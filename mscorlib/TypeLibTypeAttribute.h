#pragma once

#include "..\System\Runtime\InteropServices\TypeLibTypeFlags.h"

namespace System
{
	namespace Runtime
{
{
		namespace InteropServices
{
	class TypeLibTypeAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::InteropServices::TypeLibTypeFlags flags; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
