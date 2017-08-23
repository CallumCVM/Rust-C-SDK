#pragma once

#include "..\System\Reflection\MethodBase.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\Emit\UnmanagedMarshal.h"
#include "..\System\Reflection\ParameterAttributes.h"
#include "..\System\Object.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class ParameterBuilder : public Object // 0x0
	{
	public:
		System::Reflection::MethodBase* methodb; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::UnmanagedMarshal* marshal_info; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::ParameterAttributes attrs; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		int position; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int table_idx; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		System::Object def_value; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x48
}
