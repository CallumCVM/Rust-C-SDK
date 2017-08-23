#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace Runtime
{
{
		namespace CompilerServices
{
	class FixedBufferAttribute : public Attribute // 0x0
	{
	public:
		System::Type* elementType; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int length; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
