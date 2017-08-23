#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_MIBICMPSTATS : public ValueType // 0x0
	{
	public:
		unsigned int Msgs; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Errors; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int DestUnreachs; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int TimeExcds; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int ParmProbs; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int SrcQuenchs; // 0x24 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Redirects; // 0x28 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Echos; // 0x2c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int EchoReps; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Timestamps; // 0x34 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int TimestampReps; // 0x38 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int AddrMasks; // 0x3c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int AddrMaskReps; // 0x40 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x48
}