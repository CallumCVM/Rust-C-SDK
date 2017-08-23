#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlQualifiedName : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
		UnityEngine::UnicodeString* ns; // 0x18 (size: 0x8, flags: 0x21, type: 0xe)
		int hash; // 0x20 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x28
}
