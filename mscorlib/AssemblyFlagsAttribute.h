#pragma once

namespace System
{
	namespace Reflection
{
	class AssemblyFlagsAttribute : public Attribute // 0x0
	{
	public:
		unsigned int flags; // 0x10 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x18
}
