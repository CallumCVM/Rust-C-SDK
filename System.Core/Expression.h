#pragma once

#include "..\System\Linq\Expressions\ExpressionType.h"
#include "..\System\Type.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class Expression : public Object // 0x0
	{
	public:
		System::Type* type; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Linq::Expressions::ExpressionType node_type; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
