#pragma once

#include "..\System\Text\DecoderFallback.h"
#include "..\System\Text\EncoderFallback.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
	class Encoding : public Object // 0x0
	{
	public:
		int codePage; // 0x10 (size: 0x4, flags: 0x3, type: 0x8)
		int windows_code_page; // 0x14 (size: 0x4, flags: 0x3, type: 0x8)
		bool is_readonly; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		System::Text::DecoderFallback* decoder_fallback; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::EncoderFallback* encoder_fallback; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* body_name; // 0x30 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* encoding_name; // 0x38 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::UnicodeString* header_name; // 0x40 (size: 0x8, flags: 0x3, type: 0xe)
		bool is_mail_news_display; // 0x48 (size: 0x1, flags: 0x3, type: 0x2)
		bool is_mail_news_save; // 0x49 (size: 0x1, flags: 0x3, type: 0x2)
		bool is_browser_save; // 0x4a (size: 0x1, flags: 0x3, type: 0x2)
		bool is_browser_display; // 0x4b (size: 0x1, flags: 0x3, type: 0x2)
		UnityEngine::UnicodeString* web_name; // 0x50 (size: 0x8, flags: 0x3, type: 0xe)
	}; // size = 0x58
}
