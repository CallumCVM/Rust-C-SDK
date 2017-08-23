#pragma once

#include "..\System\Xml\XPath\BaseIterator.h"
#include "..\System\Xml\XPath\NodeTest.h"

namespace System
{
	namespace Xml
{
{
		namespace XPath
{
	class AxisIterator : public BaseIterator // 0x28
	{
	public:
		System::Xml::XPath::BaseIterator* _iter; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::NodeTest* _test; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
