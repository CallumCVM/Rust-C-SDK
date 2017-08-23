#pragma once

#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class ExprFunctionCall : public Expression // 0x0
	{
	public:
		System::Xml::XmlQualifiedName* _name; // 0x10 (size: 0x8, flags: 0x24, type: 0x12)
		System::Collections::ArrayList* _args; // 0x18 (size: 0x8, flags: 0x24, type: 0x12)
		bool resolvedName; // 0x20 (size: 0x1, flags: 0x24, type: 0x2)
	}; // size = 0x28
}
