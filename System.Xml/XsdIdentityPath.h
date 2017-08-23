#pragma once

#include "..\Mono\Xml\Schema\XsdIdentityStep.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Schema
{
	class XsdIdentityPath : public Object // 0x0
	{
	public:
		Mono::Xml::Schema::XsdIdentityStep* OrderedSteps; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		bool Descendants; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x20
}
