#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlException : public SystemException // 0x60
	{
	public:
		UnityEngine::UnicodeString* sourceUri; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* res; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** messages; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		int lineNumber; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		int linePosition; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x80
}
