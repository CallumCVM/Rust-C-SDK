#pragma once

#include "..\System\Type.h"
#include "..\System\Func<System\Object,System\Object>.h"
#include "..\System\Action<System\Object,System\Object>.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
	class ReflectionMember : public Object // 0x0
	{
	public:
		System::Type* <MemberType>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Func<System::Object,System::Object> <Getter>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action<System::Object,System::Object> <Setter>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
