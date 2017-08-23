#pragma once

namespace System
{
	namespace Text
{
	class DecoderFallbackException : public ArgumentException // 0x68
	{
	public:
		unsigned char* bytes_unknown; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		int index; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x78
}
