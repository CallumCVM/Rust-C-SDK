#pragma once

#include "..\System\Linq\Expressions\CompilationContext.h"
#include "..\System\Runtime\CompilerServices\ExecutionScope.h"
#include "..\System\Object.h"

namespace rust 
{
	class ParameterReplacer : public ExpressionTransformer // 0x0
	{
	public:
		System::Linq::Expressions::CompilationContext* context; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::CompilerServices::ExecutionScope* scope; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object* locals; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
