#pragma once

#include "..\System\Type.h"
#include "..\System\Reflection\ExceptionHandlingClauseOptions.h"

namespace System
{
	namespace Reflection
{
	class ExceptionHandlingClause : public Object // 0x0
	{
	public:
		System::Type* catch_type; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		int filter_offset; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
		System::Reflection::ExceptionHandlingClauseOptions flags; // 0x1c (size: 0x4, flags: 0x3, type: 0x11)
		int try_offset; // 0x20 (size: 0x4, flags: 0x3, type: 0x8)
		int try_length; // 0x24 (size: 0x4, flags: 0x3, type: 0x8)
		int handler_offset; // 0x28 (size: 0x4, flags: 0x3, type: 0x8)
		int handler_length; // 0x2c (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x30
}
