#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaContentProcessing.h"
#include "..\Mono\Xml\Schema\XsdWildcard.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaAnyAttribute : public XmlSchemaAnnotated // 0x88
	{
	public:
		UnityEngine::UnicodeString* nameSpace; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::Schema::XsdWildcard* wildcard; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaContentProcessing processing; // 0x98 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xa0
}
