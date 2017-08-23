#pragma once

#include "..\System\Decimal.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Schema\XmlSchemaParticle.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaParticle : public XmlSchemaAnnotated // 0x88
	{
	public:
		UnityEngine::UnicodeString* minstr; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* maxstr; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Schema::XmlSchemaParticle* OptimizedParticle; // 0x98 (size: 0x8, flags: 0x3, type: 0x12)
		System::Decimal minOccurs; // 0xa0 (size: 0x10, flags: 0x1, type: 0x11)
		System::Decimal maxOccurs; // 0xb0 (size: 0x10, flags: 0x1, type: 0x11)
		System::Decimal validatedMinOccurs; // 0xc0 (size: 0x10, flags: 0x1, type: 0x11)
		System::Decimal validatedMaxOccurs; // 0xd0 (size: 0x10, flags: 0x1, type: 0x11)
		int recursionDepth; // 0xe0 (size: 0x4, flags: 0x3, type: 0x8)
		System::Decimal minEffectiveTotalRange; // 0xe4 (size: 0x10, flags: 0x1, type: 0x11)
		bool parentIsGroupDefinition; // 0xf4 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0xf8
}
