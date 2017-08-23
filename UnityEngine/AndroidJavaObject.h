#pragma once

namespace UnityEngine
{
	class AndroidJavaObject : public Object // 0x0
	{
	public:
		bool m_disposed; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		__int64 m_jobject; // 0x18 (size: 0x8, flags: 0x4, type: 0x18)
		__int64 m_jclass; // 0x20 (size: 0x8, flags: 0x4, type: 0x18)
	}; // size = 0x28
}
