#pragma once

#include "..\System\Text\StringBuilder.h"

namespace System
{
	namespace Linq
{
{
		namespace Expressions
{
	class ExpressionPrinter : public ExpressionVisitor // 0x0
	{
	public:
		System::Text::StringBuilder* builder; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
