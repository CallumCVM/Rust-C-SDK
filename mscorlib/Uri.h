#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Security
{
	class Uri : public Object // 0x0
	{
	public:
		bool isUnixFilePath; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* source; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* scheme; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* host; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		int port; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* path; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* query; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fragment; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* userinfo; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		bool isUnc; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
		bool isOpaquePart; // 0x59 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString** segments; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		bool userEscaped; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* cachedAbsoluteUri; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* cachedToString; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* cachedLocalPath; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		int cachedHashCode; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		bool reduce; // 0x8c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x90
}
