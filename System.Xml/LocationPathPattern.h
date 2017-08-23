#pragma once

#include "..\Mono\Xml\XPath\LocationPathPattern.h"
#include "..\System\Xml\XPath\NodeTest.h"
#include "..\System\Xml\XPath\ExprFilter.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class LocationPathPattern : public Pattern // 0x0
	{
	public:
		Mono::Xml::XPath::LocationPathPattern* patternPrevious; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::NodeTest* nodeTest; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XPath::ExprFilter* filter; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool isAncestor; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
