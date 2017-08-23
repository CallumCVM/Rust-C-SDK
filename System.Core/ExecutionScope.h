#pragma once

#include "..\System\Object.h"
#include "..\System\Runtime\CompilerServices\ExecutionScope.h"
#include "..\System\Linq\Expressions\CompilationContext.h"

namespace System
{
	namespace Runtime
{
{
		namespace CompilerServices
{
	class ExecutionScope : public Object // 0x0
	{
	public:
		System::Object* Globals; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Object* Locals; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		System::Runtime::CompilerServices::ExecutionScope* Parent; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Linq::Expressions::CompilationContext* context; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		int compilation_unit; // 0x30 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x38
}
