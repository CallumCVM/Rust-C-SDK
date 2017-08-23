#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\ArrayList.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Serialization\IFormatterConverter.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class SerializationInfo : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* serialized; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* values; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* assemblyName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fullTypeName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::Serialization::IFormatterConverter* converter; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
