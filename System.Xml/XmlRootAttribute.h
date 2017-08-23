#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlRootAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* dataType; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* elementName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* ns; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		bool isNullable; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool isNullableSpecified; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
