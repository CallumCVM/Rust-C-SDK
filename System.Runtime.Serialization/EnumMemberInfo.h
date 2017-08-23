#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class EnumMemberInfo : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* XmlName; // 0x10 (size: 0x8, flags: 0x26, type: 0xe)
		System::Object Value; // 0x18 (size: 0x8, flags: 0x26, type: 0x1c)
	}; // size = 0x20
}
