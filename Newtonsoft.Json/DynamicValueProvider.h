#pragma once

#include "..\System\Reflection\MemberInfo.h"
#include "..\System\Func<System\Object,System\Object>.h"
#include "..\System\Action<System\Object,System\Object>.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class DynamicValueProvider : public Object // 0x0
	{
	public:
		System::Reflection::MemberInfo* _memberInfo; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Func<System::Object,System::Object> _getter; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action<System::Object,System::Object> _setter; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
