#pragma once

#include "..\System\UInt16.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
{
{
			namespace MacOsStructs
{
	class sockaddr_dl : public ValueType // 0x0
	{
	public:
		unsigned char sdl_len; // 0x10 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char sdl_family; // 0x11 (size: 0x1, flags: 0x6, type: 0x5)
		System::UInt16 sdl_index; // 0x12 (size: 0x2, flags: 0x6, type: 0x7)
		unsigned char sdl_type; // 0x14 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char sdl_nlen; // 0x15 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char sdl_alen; // 0x16 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char sdl_slen; // 0x17 (size: 0x1, flags: 0x6, type: 0x5)
		unsigned char* sdl_data; // 0x18 (size: 0x8, flags: 0x1006, type: 0x1d)
	}; // size = 0x20
}
