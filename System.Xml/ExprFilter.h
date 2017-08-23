#pragma once

#include "..\System\Xml\XPath\Expression.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class ExprFilter : public NodeSet // 0x0
	{
	public:
		System::Xml::XPath::Expression* expr; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::XPath::Expression* pred; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x20
}
