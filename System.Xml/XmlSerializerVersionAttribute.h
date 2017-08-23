#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlSerializerVersionAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* _namespace; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _parentAssemblyId; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* _type; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _version; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
