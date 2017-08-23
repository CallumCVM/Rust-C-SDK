#pragma once

#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class SerializationSource : public Object // 0x0
	{
	public:
		System::Type* includedTypes; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* namspace; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool canBeGenerated; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
