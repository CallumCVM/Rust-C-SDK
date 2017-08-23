#pragma once

#include "..\System\Collections\Generic\Dictionary<System\Linq\Expressions\ParameterExpression,System\Linq\Expressions\LambdaExpression>.h"
#include "..\UnityEngine\List.h"
#include "..\System\Linq\Expressions\LambdaExpression.h"

namespace rust 
{
	class HoistedVariableDetector : public ExpressionVisitor // 0x0
	{
	public:
		System::Collections::Generic::Dictionary<System::Linq::Expressions::ParameterExpression,System::Linq::Expressions::LambdaExpression> parameter_to_lambda; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<System.Linq.Expressions.LambdaExpression,UnityEngine::List<System.Linq.Expressions.ParameterExpression>>* hoisted_map; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Linq::Expressions::LambdaExpression* lambda; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
