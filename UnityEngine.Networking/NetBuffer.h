#pragma once

namespace UnityEngine
{
	namespace Networking
{
	class NetBuffer : public Object // 0x0
	{
	public:
		unsigned char* m_Buffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int m_Pos; // 0x18 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x20
}
