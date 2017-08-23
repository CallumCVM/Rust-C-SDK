#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlProcessingInstruction : public XmlLinkedNode // 0x30
	{
	public:
		UnityEngine::UnicodeString* target; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* data; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x40
}
