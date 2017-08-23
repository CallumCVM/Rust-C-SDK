#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaNotation : public XmlSchemaAnnotated // 0x88
	{
	public:
		UnityEngine::UnicodeString* name; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* pub; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* system; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* qualifiedName; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xa8
}
