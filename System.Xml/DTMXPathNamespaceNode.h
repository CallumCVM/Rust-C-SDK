#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace XPath
{
	class DTMXPathNamespaceNode : public ValueType // 0x0
	{
	public:
		int DeclaredElement; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		int NextNamespace; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* Name; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Namespace; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x28
}
