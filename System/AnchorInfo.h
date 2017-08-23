#pragma once

#include "..\System\Text\RegularExpressions\Syntax\Expression.h"
#include "..\System\Text\RegularExpressions\Position.h"
#include "..\UnityEngine\UnicodeString*.h"

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
	class AnchorInfo : public Object // 0x0
	{
	public:
		System::Text::RegularExpressions::Syntax::Expression* expr; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* str; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Text::RegularExpressions::Position pos; // 0x20 (size: 0x2, flags: 0x1, type: 0x11)
		int offset; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int width; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		bool ignore; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
