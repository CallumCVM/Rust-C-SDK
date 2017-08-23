#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlCharacterData : public XmlLinkedNode // 0x30
	{
	public:
		UnityEngine::UnicodeString* data; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
