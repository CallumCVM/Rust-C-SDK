#pragma once

#include "..\UnityEngine\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Events
{
	class ArgumentCache : public Object // 0x0
	{
	public:
		UnityEngine::Object* m_ObjectArgument; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_ObjectArgumentAssemblyTypeName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_StringArgument; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int m_IntArgument; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		float m_FloatArgument; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		bool m_BoolArgument; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
