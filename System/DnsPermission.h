#pragma once

namespace System
{
	namespace Net
{
	class DnsPermission : public CodeAccessPermission // 0x0
	{
	public:
		bool m_noRestriction; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
