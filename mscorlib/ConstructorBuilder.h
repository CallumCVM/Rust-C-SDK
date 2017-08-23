#pragma once

#include "..\System\RuntimeMethodHandle.h"
#include "..\System\Reflection\Emit\ILGenerator.h"
#include "..\System\Type.h"
#include "..\System\Reflection\MethodAttributes.h"
#include "..\System\Reflection\MethodImplAttributes.h"
#include "..\System\Reflection\CallingConventions.h"
#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Reflection\Emit\ParameterBuilder.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\Emit\RefEmitPermissionSet.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class ConstructorBuilder : public ConstructorInfo // 0x0
	{
	public:
		System::RuntimeMethodHandle mhandle; // 0x10 (size: 0x8, flags: 0x1, type: 0x11)
		System::Reflection::Emit::ILGenerator* ilgen; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* parameters; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::MethodAttributes attrs; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::MethodImplAttributes iattrs; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		int table_idx; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::CallingConventions call_conv; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		System::Reflection::Emit::TypeBuilder* type; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::ParameterBuilder* pinfo; // 0x40 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		bool init_locals; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		System::Type* paramModReq; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* paramModOpt; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::RefEmitPermissionSet* permissions; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x70
}
