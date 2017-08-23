#pragma once

namespace UnityEngine
{
	namespace Networking
{
	class ChannelPacket : public ValueType // 0x0
	{
	public:
		int m_Position; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char* m_Buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		bool m_IsReliable; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
