#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Reflection\Emit\MethodBuilder.h"
#include "..\System\Reflection\Emit\ConstructorBuilder.h"
#include "..\System\Reflection\Emit\PropertyBuilder.h"
#include "..\System\Reflection\Emit\FieldBuilder.h"
#include "..\System\Reflection\Emit\EventBuilder.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Reflection\TypeAttributes.h"
#include "..\System\Reflection\Emit\ModuleBuilder.h"
#include "..\System\Reflection\Emit\PackingSize.h"
#include "..\System\Reflection\Emit\GenericTypeParameterBuilder.h"
#include "..\System\Reflection\Emit\RefEmitPermissionSet.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class TypeBuilder : public Type // 0x18
	{
	public:
		UnityEngine::UnicodeString* tname; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* nspace; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* parent; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* nesting_type; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* interfaces; // 0x38 (size: 0x8, flags: 0x3, type: 0x1d)
		int num_methods; // 0x40 (size: 0x4, flags: 0x3, type: 0x8)
		System::Reflection::Emit::MethodBuilder* methods; // 0x48 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::Emit::ConstructorBuilder* ctors; // 0x50 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::Emit::PropertyBuilder* properties; // 0x58 (size: 0x8, flags: 0x3, type: 0x1d)
		int num_fields; // 0x60 (size: 0x4, flags: 0x3, type: 0x8)
		System::Reflection::Emit::FieldBuilder* fields; // 0x68 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::Emit::EventBuilder* events; // 0x70 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::TypeBuilder* subtypes; // 0x80 (size: 0x8, flags: 0x3, type: 0x1d)
		System::Reflection::TypeAttributes attrs; // 0x88 (size: 0x4, flags: 0x3, type: 0x11)
		int table_idx; // 0x8c (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::ModuleBuilder* pmodule; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		int class_size; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::PackingSize packing_size; // 0x9c (size: 0x4, flags: 0x1, type: 0x11)
		__int64 generic_container; // 0xa0 (size: 0x8, flags: 0x1, type: 0x18)
		System::Reflection::Emit::GenericTypeParameterBuilder* generic_params; // 0xa8 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::RefEmitPermissionSet* permissions; // 0xb0 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* created; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* fullname; // 0xc0 (size: 0x8, flags: 0x1, type: 0xe)
		bool createTypeCalled; // 0xc8 (size: 0x1, flags: 0x1, type: 0x2)
		System::Type* underlying_type; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xd8
}
