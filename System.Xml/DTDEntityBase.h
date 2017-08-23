#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Uri.h"
#include "..\System\Xml\XmlResolver.h"

namespace Mono
{
	namespace Xml
{
	class DTDEntityBase : public DTDNode // 0x30
	{
	public:
		UnityEngine::UnicodeString* name; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* publicId; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* systemId; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* literalValue; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* replacementText; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* uriString; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::Uri* absUri; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlResolver* resolver; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		bool isInvalid; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		bool loadFailed; // 0x71 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x78
}
