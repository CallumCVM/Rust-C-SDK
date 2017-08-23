#pragma once

#include "..\System\Void*.h"
#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
	class Pointer : public Object // 0x0
	{
	public:
		System::Void* data; // 0x10 (size: 0x8, flags: 0x1, type: 0xf)
		System::Type* type; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
