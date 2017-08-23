#pragma once

#include "..\System\Reflection\PropertyAttributes.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Object.h"
#include "..\System\Reflection\Emit\MethodBuilder.h"
#include "..\System\Reflection\Emit\TypeBuilder.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class PropertyBuilder : public PropertyInfo // 0x0
	{
	public:
		System::Reflection::PropertyAttributes attrs; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* type; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* parameters; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object def_value; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Reflection::Emit::MethodBuilder* set_method; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::MethodBuilder* get_method; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int table_idx; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::TypeBuilder* typeb; // 0x58 (size: 0x8, flags: 0x3, type: 0x12)
		System::Type* returnModReq; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* returnModOpt; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* paramModReq; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* paramModOpt; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x80
}
