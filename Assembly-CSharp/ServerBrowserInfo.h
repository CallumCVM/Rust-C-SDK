#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\UI\Button.h"
#include "..\Facepunch\Steamworks\ServerList\Server.h"
#include "..\UnityEngine\Texture.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ServerBrowserInfo : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::UI::Text* serverName; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* serverMeta; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Text* serverText; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* headerImage; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* viewWebpage; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::Button* refresh; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Steamworks::ServerList::Server* currentServer; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture* defaultServerImage; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* weburl; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Texture* loadedTexture; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* descriptionText; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		bool isMain; // 0x70 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x78
}
