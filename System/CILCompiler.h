#pragma once

#include "..\System\Reflection\Emit\DynamicMethod.h"
#include "..\System\Reflection\Emit\LocalBuilder.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class CILCompiler : public RxCompiler // 0x20
	{
	public:
		System::Reflection::Emit::DynamicMethod* eval_methods; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool* eval_methods_defined; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System.Collections.Generic.Dictionary<int,int> generic_ops; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<int,int> op_flags; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		System.Collections.Generic.Dictionary<int,System.Reflection.Emit.Label> labels; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		System::Reflection::Emit::LocalBuilder* local_textinfo; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
