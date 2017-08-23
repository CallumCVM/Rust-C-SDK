#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Translate\Phrase.h"

namespace rust 
{
	class KeyCodeEntry : public UIDialog // 0x20
	{
	public:
		UnityEngine::UI::Text* textDisplay; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System.Action<UnityEngine::UnicodeString*> onCodeEntered; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::UI::Text* typeDisplay; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* masterCodePhrase; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Translate::Phrase* guestCodePhrase; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* textEntered; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
