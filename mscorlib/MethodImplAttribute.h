#pragma once

#include "..\System\Runtime\CompilerServices\MethodImplOptions.h"
#include "..\System\Runtime\CompilerServices\MethodCodeType.h"

namespace System
{
	namespace Runtime
{
{
		namespace CompilerServices
{
	class MethodImplAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::CompilerServices::MethodImplOptions _val; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Runtime::CompilerServices::MethodCodeType MethodCodeType; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
