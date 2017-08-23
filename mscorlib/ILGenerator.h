#pragma once

#include "..\System\Reflection\Emit\LocalBuilder.h"
#include "..\System\Reflection\Emit\ILExceptionInfo.h"
#include "..\System\Reflection\Emit\ILTokenInfo.h"
#include "..\System\Reflection\Emit\ILGenerator\LabelData.h"
#include "..\System\Reflection\Emit\ILGenerator\LabelFixup.h"
#include "..\System\Reflection\Module.h"
#include "..\System\Collections\Stack.h"
#include "..\System\Reflection\Emit\TokenGenerator.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Reflection\Emit\SequencePointList.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class ILGenerator : public Object // 0x0
	{
	public:
		unsigned char* code; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int code_len; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int max_stack; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int cur_stack; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::LocalBuilder* locals; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::ILExceptionInfo* ex_handlers; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		int num_token_fixups; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::ILTokenInfo* token_fixups; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Reflection::Emit::ILGenerator::LabelData* labels; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		int num_labels; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::ILGenerator::LabelFixup* fixups; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		int num_fixups; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Module* module; // 0x68 (size: 0x8, flags: 0x3, type: 0x12)
		int cur_block; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		System::Collections::Stack* open_blocks; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::TokenGenerator* token_gen; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* sequencePointLists; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::SequencePointList* currentSequence; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x98
}
