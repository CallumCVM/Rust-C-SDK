#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\UriParser.h"

namespace System
{
	class Uri : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* source; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* scheme; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* host; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* path; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* query; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fragment; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* userinfo; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** segments; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* cachedAbsoluteUri; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* cachedToString; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* cachedLocalPath; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		System::UriParser* parser; // 0x68 (size: 0x8, flags: 0x81, type: 0x12)
		bool isUnixFilePath; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		int port; // 0x74 (size: 0x4, flags: 0x1, type: 0x8)
		bool isUnc; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		bool isOpaquePart; // 0x79 (size: 0x1, flags: 0x1, type: 0x2)
		bool isAbsoluteUri; // 0x7a (size: 0x1, flags: 0x1, type: 0x2)
		bool userEscaped; // 0x7b (size: 0x1, flags: 0x1, type: 0x2)
		int cachedHashCode; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x80
}
