#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class Attribute : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* Prefix; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Namespace; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* LocalName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Value; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x30
}
