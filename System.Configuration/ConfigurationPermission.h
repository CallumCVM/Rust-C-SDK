#pragma once

namespace System
{
	namespace Configuration
{
	class ConfigurationPermission : public CodeAccessPermission // 0x0
	{
	public:
		bool unrestricted; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
