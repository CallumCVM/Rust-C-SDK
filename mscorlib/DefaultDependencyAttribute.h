#pragma once

#include "..\System\Runtime\CompilerServices\LoadHint.h"

namespace System
{
	namespace Runtime
{
{
		namespace CompilerServices
{
	class DefaultDependencyAttribute : public Attribute // 0x0
	{
	public:
		System::Runtime::CompilerServices::LoadHint hint; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
