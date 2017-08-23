#pragma once

#include "..\System\UIntPtr.h"
#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Reflection\Emit\CustomAttributeBuilder.h"
#include "..\System\Reflection\Emit\AssemblyBuilder.h"
#include "..\System\Reflection\Emit\MethodBuilder.h"
#include "..\System\Reflection\Emit\FieldBuilder.h"
#include "..\System\Reflection\Emit\MonoResource.h"
#include "..\System\Type.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Reflection\Emit\ModuleBuilderTokenGenerator.h"
#include "..\System\Diagnostics\SymbolStore\ISymbolWriter.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class ModuleBuilder : public Module // 0x40
	{
	public:
		System::UIntPtr dynamic_image; // 0x40 (size: 0x8, flags: 0x1, type: 0x19)
		int num_types; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::TypeBuilder* types; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::CustomAttributeBuilder* cattrs; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* guid; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		int table_idx; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::AssemblyBuilder* assemblyb; // 0x70 (size: 0x8, flags: 0x3, type: 0x12)
		System::Reflection::Emit::MethodBuilder* global_methods; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::FieldBuilder* global_fields; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
		bool is_main; // 0x88 (size: 0x1, flags: 0x1, type: 0x2)
		System::Reflection::Emit::MonoResource* resources; // 0x90 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::TypeBuilder* global_type; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* global_type_created; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* name_cache; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* us_string_cache; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		int* table_indexes; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1d)
		bool transient; // 0xc0 (size: 0x1, flags: 0x1, type: 0x2)
		System::Reflection::Emit::ModuleBuilderTokenGenerator* token_gen; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* resource_writers; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::SymbolStore::ISymbolWriter* symbolWriter; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xe0
}
