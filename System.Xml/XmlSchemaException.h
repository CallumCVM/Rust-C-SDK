#pragma once

#include "..\System\Xml\Schema\XmlSchemaObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaException : public SystemException // 0x60
	{
	public:
		System::Xml::Schema::XmlSchemaObject* sourceObj; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* sourceUri; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		bool hasLineInfo; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		int lineNumber; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		int linePosition; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x80
}
