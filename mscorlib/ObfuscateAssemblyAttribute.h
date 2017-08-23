#pragma once

namespace System
{
	namespace Reflection
{
	class ObfuscateAssemblyAttribute : public Attribute // 0x0
	{
	public:
		bool is_private; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool strip; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
