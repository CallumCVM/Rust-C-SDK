#pragma once

#include "..\System\Xml\XmlNamespaceManager\NsDecl.h"
#include "..\System\Xml\XmlNamespaceManager\NsScope.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlNameTable.h"

namespace System
{
	namespace Xml
{
	class XmlNamespaceManager : public Object // 0x0
	{
	public:
		System::Xml::XmlNamespaceManager::NsDecl* decls; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::XmlNamespaceManager::NsScope* scopes; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* defaultNamespace; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlNameTable* nameTable; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int declPos; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int scopePos; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int count; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool internalAtomizedNames; // 0x3c (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x40
}
