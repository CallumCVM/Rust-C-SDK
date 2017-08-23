#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlNamespaceManager.h"
#include "..\Mono\Xml\Schema\XsdIdentityPath.h"

namespace System
{
	namespace Xml
{
{
		namespace Schema
{
	class XmlSchemaXPath : public XmlSchemaAnnotated // 0x88
	{
	public:
		UnityEngine::UnicodeString* xpath; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlNamespaceManager* nsmgr; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Schema::XsdIdentityPath* compiledExpression; // 0x98 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Xml::Schema::XsdIdentityPath* currentPath; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		bool isSelector; // 0xa8 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0xb0
}
