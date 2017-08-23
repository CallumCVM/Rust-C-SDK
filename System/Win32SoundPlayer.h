#pragma once

namespace Mono
{
	namespace Audio
{
	class Win32SoundPlayer : public Object // 0x0
	{
	public:
		unsigned char* _buffer; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _disposed; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
