#pragma once

#include "..\UnityEngine\List.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class CompilationContext : public Object // 0x0
	{
	public:
		UnityEngine::List<System.Object>* globals; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<System.Linq.Expressions.EmitContext>* units; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<System.Linq.Expressions.LambdaExpression,UnityEngine::List<System.Linq.Expressions.ParameterExpression>>* hoisted_map; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
