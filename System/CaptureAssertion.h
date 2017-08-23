#pragma once

#include "..\System\Text\RegularExpressions\Syntax\ExpressionAssertion.h"
#include "..\System\Text\RegularExpressions\Syntax\CapturingGroup.h"
#include "..\System\Text\RegularExpressions\Syntax\Literal.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
{
{
			namespace Syntax
{
	class CaptureAssertion : public Assertion // 0x18
	{
	public:
		System::Text::RegularExpressions::Syntax::ExpressionAssertion* alternate; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::Syntax::CapturingGroup* group; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::RegularExpressions::Syntax::Literal* literal; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
