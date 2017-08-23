#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlNode.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaDocumentation : public XmlSchemaObject // 0x70
	{
	public:
		UnityEngine::UnicodeString* language; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlNode* markup; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* source; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x88
}
