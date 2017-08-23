#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlDeclaration : public XmlLinkedNode // 0x30
	{
	public:
		UnityEngine::UnicodeString* encoding; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* standalone; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* version; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x48
}
