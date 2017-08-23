#pragma once

#include "..\Mono\Xml\Xsl\Operations\XslOperation.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"
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
	class XslLiteralElement : public XslCompiledElement // 0x20
	{
	public:
		Mono::Xml::Xsl::Operations::XslOperation* children; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* localname; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* prefix; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* nsUri; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* attrs; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* useAttributeSets; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Hashtable* nsDecls; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool isEmptyElement; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
