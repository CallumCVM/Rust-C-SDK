#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class SerializationEntry : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* objectType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object value; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x28
}
