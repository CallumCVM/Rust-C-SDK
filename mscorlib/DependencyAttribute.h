#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\CompilerServices\LoadHint.h"

namespace System
{
	namespace Runtime
{
{
		namespace CompilerServices
{
	class DependencyAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* dependentAssembly; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Runtime::CompilerServices::LoadHint hint; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
