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
	class XmlTypeSerializationSource : public SerializationSource // 0x28
	{
	public:
		UnityEngine::UnicodeString* attributeOverridesHash; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* type; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* rootHash; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x40
}
