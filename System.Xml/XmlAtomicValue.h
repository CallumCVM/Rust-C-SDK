#pragma once

#include "..\System\DateTime.h"
#include "..\System\Decimal.h"
#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaType.h"
#include "..\System\Xml\Schema\XmlTypeCode.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlAtomicValue : public XPathItem // 0x0
	{
	public:
		System::Object objectValue; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* stringValue; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaType* schemaType; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool booleanValue; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime dateTimeValue; // 0x30 (size: 0x10, flags: 0x1, type: 0x11)
		System::Decimal decimalValue; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		double doubleValue; // 0x50 (size: 0x8, flags: 0x1, type: 0xd)
		int intValue; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 longValue; // 0x60 (size: 0x8, flags: 0x1, type: 0xa)
		float floatValue; // 0x68 (size: 0x4, flags: 0x1, type: 0xc)
		System::Xml::Schema::XmlTypeCode xmlTypeCode; // 0x6c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
