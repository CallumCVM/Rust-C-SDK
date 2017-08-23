#pragma once

#include "..\System\Type.h"
#include "..\System\Object.h"
#include "..\System\Reflection\MemberInfo.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\ParameterAttributes.h"
#include "..\System\Reflection\Emit\UnmanagedMarshal.h"

namespace System
{
	namespace Reflection
{
	class ParameterInfo : public Object // 0x0
	{
	public:
		System::Type* ClassImpl; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Object DefaultValueImpl; // 0x18 (size: 0x8, flags: 0x4, type: 0x1c)
		System::Reflection::MemberInfo* MemberImpl; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UnicodeString* NameImpl; // 0x28 (size: 0x8, flags: 0x4, type: 0xe)
		int PositionImpl; // 0x30 (size: 0x4, flags: 0x4, type: 0x8)
		System::Reflection::ParameterAttributes AttrsImpl; // 0x34 (size: 0x4, flags: 0x4, type: 0x11)
		System::Reflection::Emit::UnmanagedMarshal* marshalAs; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
