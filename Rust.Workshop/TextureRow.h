#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\UnityEngine\Texture.h"
#include "..\System\IO\FileSystemWatcher.h"

namespace Rust
{
	namespace Workshop
{
{
		namespace Editor
{
	class TextureRow : public MaterialRow // 0x20
	{
	public:
		UnityEngine::UnicodeString* Filename; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UI::RawImage* TargetImage; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* FilenameLabel; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* Reset; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* Clear; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture* Default; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::FileSystemWatcher* watcher; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool IsNormalMap; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		bool HasChanges; // 0x59 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x60
}
