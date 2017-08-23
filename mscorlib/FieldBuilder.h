#pragma once

#include "..\System\Reflection\FieldAttributes.h"
#include "..\System\Type.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"
#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\Emit\UnmanagedMarshal.h"
#include "..\System\RuntimeFieldHandle.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class FieldBuilder : public FieldInfo // 0x0
	{
	public:
		System::Reflection::FieldAttributes attrs; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Type* type; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object def_value; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		int offset; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int table_idx; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::TypeBuilder* typeb; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		unsigned char* rva_data; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::UnmanagedMarshal* marshal_info; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::RuntimeFieldHandle handle; // 0x58 (size: 0x8, flags: 0x1, type: 0x11)
		System::Type* modReq; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Type* modOpt; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x70
}
