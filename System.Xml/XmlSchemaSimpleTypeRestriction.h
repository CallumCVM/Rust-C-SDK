#pragma once

#include "..\System\Xml\Schema\XmlSchemaSimpleType.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Xml\Schema\XmlSchemaObjectCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\RegularExpressions\Regex.h"
#include "..\System\Decimal.h"
#include "..\System\Object.h"
#include "..\System\Xml\Schema\XmlSchemaFacet\Facet.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaSimpleTypeRestriction : public XmlSchemaSimpleTypeContent // 0x90
	{
	public:
		System::Xml::Schema::XmlSchemaSimpleType* baseType; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* baseTypeName; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Schema::XmlSchemaObjectCollection* facets; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** enumarationFacetValues; // 0xa8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** patternFacetValues; // 0xb0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Text::RegularExpressions::Regex* rexPatterns; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object maxInclusiveFacet; // 0xc0 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object maxExclusiveFacet; // 0xc8 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object minInclusiveFacet; // 0xd0 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object minExclusiveFacet; // 0xd8 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Decimal lengthFacet; // 0xe0 (size: 0x10, flags: 0x1, type: 0x11)
		System::Decimal maxLengthFacet; // 0xf0 (size: 0x10, flags: 0x1, type: 0x11)
		System::Decimal minLengthFacet; // 0x100 (size: 0x10, flags: 0x1, type: 0x11)
		System::Decimal fractionDigitsFacet; // 0x110 (size: 0x10, flags: 0x1, type: 0x11)
		System::Decimal totalDigitsFacet; // 0x120 (size: 0x10, flags: 0x1, type: 0x11)
		System::Xml::Schema::XmlSchemaFacet::Facet fixedFacets; // 0x130 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x138
}
