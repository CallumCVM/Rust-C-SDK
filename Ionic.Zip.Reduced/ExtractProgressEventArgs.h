#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Ionic
{
	namespace Zip
{
	class ExtractProgressEventArgs : public ZipProgressEventArgs // 0x40
	{
	public:
		UnityEngine::UnicodeString* _target; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		int _entriesExtracted; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
