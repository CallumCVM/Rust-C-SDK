#pragma once

#include "..\System\Reflection\MemberInfo.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class ILTokenInfo : public ValueType // 0x0
	{
	public:
		System::Reflection::MemberInfo* member; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		int code_pos; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x20
}
