#pragma once

#include "..\System\Xml\XmlNode.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaAppInfo : public XmlSchemaObject // 0x70
	{
	public:
		System::Xml::XmlNode* markup; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* source; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x80
}
