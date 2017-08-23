#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class QuickSearch : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* str; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* shift; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::Hashtable* shiftExtended; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int len; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		bool ignore; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
		bool reverse; // 0x2d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
