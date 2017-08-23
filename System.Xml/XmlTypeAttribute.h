#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlTypeAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* ns; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* typeName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool includeInSchema; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool anonymousType; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
