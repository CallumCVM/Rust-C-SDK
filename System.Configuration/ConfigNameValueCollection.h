#pragma once

namespace System
{
	namespace Configuration
{
	class ConfigNameValueCollection : public NameValueCollection // 0x68
	{
	public:
		bool modified; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
