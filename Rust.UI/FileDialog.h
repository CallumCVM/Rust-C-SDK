#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Rust\UI\FileDialog\FileDialogMode.h"
#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\InputField.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Sprite.h"

namespace Rust
{
	namespace UI
{
	class FileDialog : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* result; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UI::Image* windowIcon; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* windowName; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* currentPath; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::InputField* fileName; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* up; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* commit; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* cancel; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* filesScrollRectContent; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* drivesScrollRectContent; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* filesScrollRectElement; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* drivesScrollRectElement; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* folderIcon; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Sprite* fileIcon; // 0x80 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* workingPath; // 0x88 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* workingFile; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** allowedExtensions; // 0x98 (size: 0x8, flags: 0x1, type: 0x1d)
		Rust::UI::FileDialog::FileDialogMode mode; // 0xa0 (size: 0x4, flags: 0x1, type: 0x11)
		bool finished; // 0xa4 (size: 0x1, flags: 0x6, type: 0x2)
		__int64 maxSize; // 0xa8 (size: 0x8, flags: 0x1, type: 0xa)
		bool saveLastPath; // 0xb0 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xb8
}
