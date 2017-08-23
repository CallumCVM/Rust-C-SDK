#pragma once

#include "..\System\Reflection\Emit\ILExceptionBlock.h"
#include "..\System\Reflection\Emit\Label.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class ILExceptionInfo : public ValueType // 0x0
	{
	public:
		System::Reflection::Emit::ILExceptionBlock* handlers; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int start; // 0x18 (size: 0x4, flags: 0x3, type: 0x8)
		int len; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		System::Reflection::Emit::Label end; // 0x20 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x28
}
