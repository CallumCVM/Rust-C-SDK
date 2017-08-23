#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\MemberInfo.h"
#include "..\System\Type.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class DataMemberInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* XmlName; // 0x10 (size: 0x8, flags: 0x26, type: 0xe)
		System::Reflection::MemberInfo* Member; // 0x18 (size: 0x8, flags: 0x26, type: 0x12)
		UnityEngine::UnicodeString* XmlNamespace; // 0x20 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* XmlRootNamespace; // 0x28 (size: 0x8, flags: 0x26, type: 0xe)
		System::Type* MemberType; // 0x30 (size: 0x8, flags: 0x26, type: 0x12)
		int Order; // 0x38 (size: 0x4, flags: 0x26, type: 0x8)
		bool IsRequired; // 0x3c (size: 0x1, flags: 0x26, type: 0x2)
	}; // size = 0x40
}
