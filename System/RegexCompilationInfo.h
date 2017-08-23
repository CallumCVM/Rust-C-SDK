#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Text\RegularExpressions\RegexOptions.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class RegexCompilationInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* pattern; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* nspace; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Text::RegularExpressions::RegexOptions options; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		bool isPublic; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
