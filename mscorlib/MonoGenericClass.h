#pragma once

#include "..\System\Reflection\Emit\TypeBuilder.h"
#include "..\System\Type.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Reflection
{
	class MonoGenericClass : public MonoType // 0x20
	{
	public:
		System::Reflection::Emit::TypeBuilder* generic_type; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		System::Type* type_arguments; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		bool initialized; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		System::Collections::Hashtable* fields; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* ctors; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* methods; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		int event_count; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
