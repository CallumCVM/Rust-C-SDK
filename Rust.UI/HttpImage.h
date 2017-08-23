#pragma once

#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Texture2D.h"

namespace Rust
{
	namespace UI
{
	class HttpImage : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::RawImage* image; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* Url; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Texture2D* LoadedTexture; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
