#pragma once

namespace System
{
	namespace Security
{
	class SecureString : public CriticalFinalizerObject // 0x0
	{
	public:
		int length; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		bool disposed; // 0x14 (size: 0x1, flags: 0x1, type: 0x2)
		bool read_only; // 0x15 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* data; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
