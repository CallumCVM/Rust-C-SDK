#pragma once

namespace System
{
	namespace Configuration
{
	class DpapiProtectedConfigurationProvider : public ProtectedConfigurationProvider // 0x28
	{
	public:
		bool useMachineProtection; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
