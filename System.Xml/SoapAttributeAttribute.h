#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class SoapAttributeAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* attrName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* dataType; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* ns; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
