#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlLinkedNode.h"

namespace System
{
	namespace Xml
{
	class XmlEntityReference : public XmlLinkedNode // 0x30
	{
	public:
		UnityEngine::UnicodeString* entityName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlLinkedNode* lastLinkedChild; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
