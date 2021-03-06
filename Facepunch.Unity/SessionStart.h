#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Facepunch
{
	namespace Models
{
{
		namespace Analytics
{
	class SessionStart : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Uid; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Sid; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Bucket; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* ChangeSet; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Branch; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Os; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Gpu; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Cpu; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Arch; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		int CpuCnt; // 0x58 (size: 0x4, flags: 0x6, type: 0x8)
		int Mem; // 0x5c (size: 0x4, flags: 0x6, type: 0x8)
		int GpuMem; // 0x60 (size: 0x4, flags: 0x6, type: 0x8)
		int CpuFrq; // 0x64 (size: 0x4, flags: 0x6, type: 0x8)
		bool Fullscreen; // 0x68 (size: 0x1, flags: 0x6, type: 0x2)
		int Height; // 0x6c (size: 0x4, flags: 0x6, type: 0x8)
		int Width; // 0x70 (size: 0x4, flags: 0x6, type: 0x8)
		int RR; // 0x74 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x78
}
