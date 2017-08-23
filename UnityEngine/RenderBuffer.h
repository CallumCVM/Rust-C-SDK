#pragma once

namespace UnityEngine
{
	class RenderBuffer : public ValueType // 0x0
	{
	public:
		int m_RenderTextureInstanceID; // 0x10 (size: 0x4, flags: 0x3, type: 0x8)
		__int64 m_BufferPtr; // 0x18 (size: 0x8, flags: 0x3, type: 0x18)
	}; // size = 0x20
}
