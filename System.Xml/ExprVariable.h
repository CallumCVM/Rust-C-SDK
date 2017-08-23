#pragma once

#include "..\System\Xml\XmlQualifiedName.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class ExprVariable : public Expression // 0x0
	{
	public:
		System::Xml::XmlQualifiedName* _name; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		bool resolvedName; // 0x18 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x20
}
