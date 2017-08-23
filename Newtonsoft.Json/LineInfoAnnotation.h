#pragma once

namespace rust 
{
	class LineInfoAnnotation : public Object // 0x0
	{
	public:
		int LineNumber; // 0x10 (size: 0x4, flags: 0x23, type: 0x8)
		int LinePosition; // 0x14 (size: 0x4, flags: 0x23, type: 0x8)
	}; // size = 0x18
}
