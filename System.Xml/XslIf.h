#pragma once

#include "..\System\Xml\XPath\CompiledExpression.h"
#include "..\Mono\Xml\Xsl\Operations\XslOperation.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
{
{
			namespace Operations
{
	class XslIf : public XslCompiledElement // 0x20
	{
	public:
		System::Xml::XPath::CompiledExpression* test; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslOperation* children; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
