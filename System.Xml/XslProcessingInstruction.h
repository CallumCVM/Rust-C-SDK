#pragma once

#include "..\Mono\Xml\Xsl\Operations\XslAvt.h"
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
	class XslProcessingInstruction : public XslCompiledElement // 0x20
	{
	public:
		Mono::Xml::Xsl::Operations::XslAvt* name; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::Operations::XslOperation* value; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
