#pragma once

#include "..\System\Reflection\Emit\ModuleBuilder.h"
#include "..\System\Type.h"
#include "..\System\Reflection\Emit\SignatureHelper\SignatureHelperType.h"
#include "..\System\Reflection\CallingConventions.h"
#include "..\System\Runtime\InteropServices\CallingConvention.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class SignatureHelper : public Object // 0x0
	{
	public:
		System::Reflection::Emit::ModuleBuilder* module; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* arguments; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::SignatureHelper::SignatureHelperType type; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		System::Type* returnType; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::CallingConventions callConv; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::InteropServices::CallingConvention unmanagedCallConv; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		System::Type* modreqs; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* modopts; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x48
}
