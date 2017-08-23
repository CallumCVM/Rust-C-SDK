#pragma once

namespace UnityEngine
{
	class TextAreaAttribute : public PropertyAttribute // 0x18
	{
	public:
		int minLines; // 0x14 (size: 0x4, flags: 0x26, type: 0x8)
		int maxLines; // 0x18 (size: 0x4, flags: 0x26, type: 0x8)
	}; // size = 0x20
}
