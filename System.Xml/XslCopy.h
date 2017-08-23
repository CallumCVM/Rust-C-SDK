#pragma once

#include "..\Mono\Xml\Xsl\Operations\XslOperation.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Collections\Hashtable.h"

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
	class XslCopy : public XslCompiledElement // 0x20
	{
	public:
		Mono::Xml::Xsl::Operations::XslOperation* children; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* useAttributeSets; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Hashtable* nsDecls; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
