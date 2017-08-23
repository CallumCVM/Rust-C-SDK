#pragma once

#include "..\System\Collections\IDictionary.h"
#include "..\System\UInt16.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class InterpreterFactory : public Object // 0x0
	{
	public:
		System::Collections::IDictionary* mapping; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::UInt16* pattern; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** namesMapping; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int gap; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
