#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Resources
{
	class Win32VersionResource : public Win32Resource // 0x28
	{
	public:
		UnityEngine::UnicodeString** WellKnownProperties; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		__int64 signature; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		int struct_version; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 file_version; // 0x40 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 product_version; // 0x48 (size: 0x8, flags: 0x1, type: 0xa)
		int file_flags_mask; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int file_flags; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
		int file_os; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		int file_type; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
		int file_subtype; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 file_date; // 0x68 (size: 0x8, flags: 0x1, type: 0xa)
		int file_lang; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		int file_codepage; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		System::Collections::Hashtable* properties; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x80
}
