#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlAnyElementAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* elementName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* ns; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool isNamespaceSpecified; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		int order; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
