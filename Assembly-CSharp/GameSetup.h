#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class GameSetup : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* clientConnectCommand; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* loadLevelScene; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* loadSaveFile; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		bool startServer; // 0x30 (size: 0x1, flags: 0x6, type: 0x2)
		bool loadMenu; // 0x31 (size: 0x1, flags: 0x6, type: 0x2)
		bool loadLevel; // 0x32 (size: 0x1, flags: 0x6, type: 0x2)
		bool loadSave; // 0x33 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x38
}
