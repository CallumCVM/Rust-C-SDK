#pragma once

#include "..\System\Xml\Schema\XmlSchemaAnnotation.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaImport : public XmlSchemaExternal // 0x90
	{
	public:
		System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* nameSpace; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0xa0
}
