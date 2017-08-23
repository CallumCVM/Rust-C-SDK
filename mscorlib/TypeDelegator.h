#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
	class TypeDelegator : public Type // 0x18
	{
	public:
		System::Type* typeImpl; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x20
}
