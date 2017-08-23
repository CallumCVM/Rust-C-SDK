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
	class XmlSchemaAny : public XmlSchemaParticle // 0xf8
	{
	public:
		UnityEngine::UnicodeString* nameSpace; // 0xf8 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::Schema::XsdWildcard* wildcard; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaContentProcessing processing; // 0x108 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x110
}
