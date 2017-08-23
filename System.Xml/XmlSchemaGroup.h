#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaGroupBase.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaGroup : public XmlSchemaAnnotated // 0x88
	{
	public:
		UnityEngine::UnicodeString* name; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaGroupBase* particle; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* qualifiedName; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		bool isCircularDefinition; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa8
}
