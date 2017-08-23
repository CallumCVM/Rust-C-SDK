#pragma once

#include "..\System\Xml\Schema\XmlSchemaException.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSeverityType.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class ValidationEventArgs : public EventArgs // 0x0
	{
	public:
		System::Xml::Schema::XmlSchemaException* exception; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* message; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSeverityType severity; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
