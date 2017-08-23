#pragma once

#include "..\UnityEngine\UI\Image.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\Rust\UI\FileDialog.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Rust
{
	namespace UI
{
	class FileListElement : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Image* icon; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* elementName; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* size; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Rust::UI::FileDialog* instance; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* data; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		bool isFile; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
