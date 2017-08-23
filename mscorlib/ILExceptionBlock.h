#pragma once

#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class ILExceptionBlock : public ValueType // 0x0
	{
	public:
		System::Type* extype; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		int type; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
		int start; // 0x1c (size: 0x4, flags: 0x3, type: 0x8)
		int len; // 0x20 (size: 0x4, flags: 0x3, type: 0x8)
		int filter_offset; // 0x24 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x28
}
