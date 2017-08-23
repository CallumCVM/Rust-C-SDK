#pragma once

#include "..\System\TermInfoReader.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\IO\StreamReader.h"
#include "..\System\IO\CStreamWriter.h"
#include "..\System\Char.h"
#include "..\System\Object.h"
#include "..\System\ConsoleColor.h"
#include "..\System\Collections\Hashtable.h"

namespace System
{
	class TermInfoDriver : public Object // 0x0
	{
	public:
		System::TermInfoReader* reader; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int cursorLeft; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int cursorTop; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* title; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* titleFormat; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool cursorVisible; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* csrVisible; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* csrInvisible; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* clear; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* bell; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* term; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::IO::StreamReader* stdin; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::CStreamWriter* stdout; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		int windowWidth; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
		int windowHeight; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		int bufferHeight; // 0x78 (size: 0x4, flags: 0x1, type: 0x8)
		int bufferWidth; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		System::Char* buffer; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
		int readpos; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		int writepos; // 0x8c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* keypadXmit; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* keypadLocal; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		bool controlCAsInput; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
		bool inited; // 0xa1 (size: 0x1, flags: 0x1, type: 0x2)
		System::Object initLock; // 0xa8 (size: 0x8, flags: 0x1, type: 0x1c)
		bool initKeys; // 0xb0 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* origPair; // 0xb8 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* origColors; // 0xc0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* cursorAddress; // 0xc8 (size: 0x8, flags: 0x1, type: 0xe)
		System::ConsoleColor fgcolor; // 0xd0 (size: 0x4, flags: 0x1, type: 0x11)
		System::ConsoleColor bgcolor; // 0xd4 (size: 0x4, flags: 0x1, type: 0x11)
		bool color16; // 0xd8 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* setlfgcolor; // 0xe0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* setlbgcolor; // 0xe8 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* setfgcolor; // 0xf0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* setbgcolor; // 0xf8 (size: 0x8, flags: 0x1, type: 0xe)
		bool noGetPosition; // 0x100 (size: 0x1, flags: 0x1, type: 0x2)
		System::Collections::Hashtable* keymap; // 0x108 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned charMatcher* rootmap; // 0x110 (size: 0x8, flags: 0x1, type: 0x12)
		bool home_1_1; // 0x118 (size: 0x1, flags: 0x1, type: 0x2)
		int rl_startx; // 0x11c (size: 0x4, flags: 0x1, type: 0x8)
		int rl_starty; // 0x120 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char* control_characters; // 0x128 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Char* echobuf; // 0x130 (size: 0x8, flags: 0x1, type: 0x1d)
		int echon; // 0x138 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x140
}
