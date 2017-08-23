#pragma once

#include "..\System\Char.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Globalization
{
{
		namespace Unicode
{
	class Contraction : public Object // 0x0
	{
	public:
		System::Char* Source; // 0x10 (size: 0x8, flags: 0x26, type: 0x1d)
		UnityEngine::UnicodeString* Replacement; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
		unsigned char* SortKey; // 0x20 (size: 0x8, flags: 0x26, type: 0x1d)
	}; // size = 0x28
}
