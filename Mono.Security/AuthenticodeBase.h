#pragma once

#include "..\System\IO\FileStream.h"

namespace Mono
{
	namespace Security
{
{
		namespace Authenticode
{
	class AuthenticodeBase : public Object // 0x0
	{
	public:
		unsigned char* fileblock; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		System::IO::FileStream* fs; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int blockNo; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int blockLength; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
		int peOffset; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int dirSecurityOffset; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		int dirSecuritySize; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int coffSymbolTableOffset; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
