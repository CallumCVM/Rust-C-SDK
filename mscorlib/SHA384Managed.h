#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class SHA384Managed : public SHA384 // 0x28
	{
	public:
		unsigned char* xBuf; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		int xBufOff; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned __int64 byteCount1; // 0x38 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 byteCount2; // 0x40 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 H1; // 0x48 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 H2; // 0x50 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 H3; // 0x58 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 H4; // 0x60 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 H5; // 0x68 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 H6; // 0x70 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 H7; // 0x78 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 H8; // 0x80 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64* W; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		int wOff; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x98
}
