#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Apex
{
	namespace AI
{
{
		namespace Serialization
{
	class AIStorage : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* description; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* aiId; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* configuration; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* editorConfiguration; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		int version; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
