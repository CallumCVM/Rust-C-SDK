#pragma once

#include "..\Mono\Xml\XPath\Pattern.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class UnionPattern : public Pattern // 0x0
	{
	public:
		Mono::Xml::XPath::Pattern* p0; // 0x10 (size: 0x8, flags: 0x26, type: 0x12)
		Mono::Xml::XPath::Pattern* p1; // 0x18 (size: 0x8, flags: 0x26, type: 0x12)
	}; // size = 0x20
}
