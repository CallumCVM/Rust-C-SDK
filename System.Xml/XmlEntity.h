#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlLinkedNode.h"

namespace System
{
	namespace Xml
{
	class XmlEntity : public XmlNode // 0x28
	{
	public:
		UnityEngine::UnicodeString* name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* NDATA; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* publicId; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* systemId; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* baseUri; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlLinkedNode* lastLinkedChild; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool contentAlreadySet; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
