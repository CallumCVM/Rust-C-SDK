#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace IO
{
	class FileNotFoundException : public IOException // 0x60
	{
	public:
		UnityEngine::UnicodeString* fileName; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fusionLog; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x70
}
