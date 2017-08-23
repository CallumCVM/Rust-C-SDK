#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
	class DTDNotationDeclaration : public DTDNode // 0x30
	{
	public:
		UnityEngine::UnicodeString* name; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* localName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* prefix; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* publicId; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* systemId; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x58
}
