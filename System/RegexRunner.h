#pragma once

#include "..\System\Text\RegularExpressions\Match.h"
#include "..\System\Text\RegularExpressions\Regex.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
{
		namespace RegularExpressions
{
	class RegexRunner : public Object // 0x0
	{
	public:
		int* runcrawl; // 0x10 (size: 0x8, flags: 0x5, type: 0x1d)
		System::Text::RegularExpressions::Match* runmatch; // 0x18 (size: 0x8, flags: 0x5, type: 0x12)
		System::Text::RegularExpressions::Regex* runregex; // 0x20 (size: 0x8, flags: 0x5, type: 0x12)
		int* runstack; // 0x28 (size: 0x8, flags: 0x5, type: 0x1d)
		UnityEngine::UnicodeString* runtext; // 0x30 (size: 0x8, flags: 0x5, type: 0xe)
		int* runtrack; // 0x38 (size: 0x8, flags: 0x5, type: 0x1d)
		int runcrawlpos; // 0x40 (size: 0x4, flags: 0x5, type: 0x8)
		int runstackpos; // 0x44 (size: 0x4, flags: 0x5, type: 0x8)
		int runtextbeg; // 0x48 (size: 0x4, flags: 0x5, type: 0x8)
		int runtextend; // 0x4c (size: 0x4, flags: 0x5, type: 0x8)
		int runtextpos; // 0x50 (size: 0x4, flags: 0x5, type: 0x8)
		int runtextstart; // 0x54 (size: 0x4, flags: 0x5, type: 0x8)
		int runtrackcount; // 0x58 (size: 0x4, flags: 0x5, type: 0x8)
		int runtrackpos; // 0x5c (size: 0x4, flags: 0x5, type: 0x8)
	}; // size = 0x60
}
