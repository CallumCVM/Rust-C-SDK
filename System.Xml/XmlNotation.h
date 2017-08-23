#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlNotation : public XmlNode // 0x28
	{
	public:
		UnityEngine::UnicodeString* localName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* publicId; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* systemId; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* prefix; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x48
}
