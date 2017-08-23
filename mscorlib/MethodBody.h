#pragma once

#include "..\System\Reflection\ExceptionHandlingClause.h"
#include "..\System\Reflection\LocalVariableInfo.h"

namespace System
{
	namespace Reflection
{
	class MethodBody : public Object // 0x0
	{
	public:
		System::Reflection::ExceptionHandlingClause* clauses; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::LocalVariableInfo* locals; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* il; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool init_locals; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		int sig_token; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int max_stack; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
