#pragma once

#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Reflection\Emit\MethodBuilder.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\GenericParameterAttributes.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class GenericTypeParameterBuilder : public Type // 0x18
	{
	public:
		System::Reflection::Emit::TypeBuilder* tbuilder; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::MethodBuilder* mbuilder; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		int index; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		System::Type* base_type; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* iface_constraints; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::GenericParameterAttributes attrs; // 0x50 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
