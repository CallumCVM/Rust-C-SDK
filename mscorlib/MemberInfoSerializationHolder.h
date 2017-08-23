#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\MemberTypes.h"
#include "..\System\Type.h"

namespace System
{
	namespace Reflection
{
	class MemberInfoSerializationHolder : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _memberName; // 0x10 (size: 0x8, flags: 0x21, type: 0xe)
		UnityEngine::UnicodeString* _memberSignature; // 0x18 (size: 0x8, flags: 0x21, type: 0xe)
		System::Reflection::MemberTypes _memberType; // 0x20 (size: 0x4, flags: 0x21, type: 0x11)
		System::Type* _reflectedType; // 0x28 (size: 0x8, flags: 0x21, type: 0x12)
		System::Type* _genericArguments; // 0x30 (size: 0x8, flags: 0x21, type: 0x1d)
	}; // size = 0x38
}
