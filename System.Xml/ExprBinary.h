#pragma once

#include "..\System\Xml\XPath\Expression.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class ExprBinary : public Expression // 0x0
	{
	public:
		System::Xml::XPath::Expression* _left; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Xml::XPath::Expression* _right; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x20
}
