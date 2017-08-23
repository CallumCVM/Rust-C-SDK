#pragma once

#include "..\System\Xml\XPath\Expression.h"
#include "..\System\Xml\XPath\FunctionArguments.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class FunctionArguments : public Object // 0x0
	{
	public:
		System::Xml::XPath::Expression* _arg; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Xml::XPath::FunctionArguments* _tail; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x20
}
