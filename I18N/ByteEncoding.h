#pragma once

#include "..\System\Char.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace I18N
{
	namespace Common
{
	class ByteEncoding : public MonoEncoding // 0x60
	{
	public:
		System::Char* toChars; // 0x60 (size: 0x8, flags: 0x4, type: 0x1d)
		UnityEngine::UnicodeString* encodingName; // 0x68 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::UnicodeString* bodyName; // 0x70 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::UnicodeString* headerName; // 0x78 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::UnicodeString* webName; // 0x80 (size: 0x8, flags: 0x4, type: 0xe)
		bool isBrowserDisplay; // 0x88 (size: 0x1, flags: 0x4, type: 0x2)
		bool isBrowserSave; // 0x89 (size: 0x1, flags: 0x4, type: 0x2)
		bool isMailNewsDisplay; // 0x8a (size: 0x1, flags: 0x4, type: 0x2)
		bool isMailNewsSave; // 0x8b (size: 0x1, flags: 0x4, type: 0x2)
		int windowsCodePage; // 0x8c (size: 0x4, flags: 0x4, type: 0x8)
	}; // size = 0x90
}
