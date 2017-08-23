#pragma once

#include "..\System\Object.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\DelegateData.h"

namespace System
{
	class Delegate : public Object // 0x0
	{
	public:
		__int64 method_ptr; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 invoke_impl; // 0x18 (size: 0x8, flags: 0x1, type: 0x18)
		System::Object m_target; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		__int64 method; // 0x28 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 delegate_trampoline; // 0x30 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 method_code; // 0x38 (size: 0x8, flags: 0x1, type: 0x18)
		System::Reflection::MethodInfo* method_info; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* original_method_info; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::DelegateData* data; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
