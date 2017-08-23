#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\InputField.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Color.h"
#include "TextBuffer.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\UI\Button.h"

namespace rust 
{
	class ConsoleUI : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::UI::Text* text; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* outputField; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* inputField; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* AutocompleteDropDown; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* ItemTemplate; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		TextBuffer* buffer; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		TextBuffer* history; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* historyTemp; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* historyText; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UI::Button* autocompleteButtons; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Color errorColor; // 0x68 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color warningColor; // 0x78 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Color inputColor; // 0x88 (size: 0x10, flags: 0x6, type: 0x11)
		int historyIndex; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		int autocompleteIndex; // 0x9c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xa0
}
