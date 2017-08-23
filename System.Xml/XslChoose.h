#pragma once

#include "..\Mono\Xml\Xsl\Operations\XslOperation.h"
#include "..\System\Collections\ArrayList.h"

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
	class XslChoose : public XslCompiledElement // 0x20
	{
	public:
		Mono::Xml::Xsl::Operations::XslOperation* defaultChoice; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* conditions; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
