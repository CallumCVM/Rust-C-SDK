#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class MembersSerializationSource : public SerializationSource // 0x28
	{
	public:
		UnityEngine::UnicodeString* elementName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* membersHash; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool hasWrapperElement; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool writeAccessors; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
		bool literalFormat; // 0x3a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
