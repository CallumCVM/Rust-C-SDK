#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Models\Analytics\Stat.h"

namespace Facepunch
{
	namespace Models
{
{
		namespace Analytics
{
	class SessionUpdate : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Uid; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Sid; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		int* Frames; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		Facepunch::Models::Analytics::Stat* Stats; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		int Mem; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		int Gc; // 0x34 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
