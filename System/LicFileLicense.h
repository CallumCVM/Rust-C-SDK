#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
	class LicFileLicense : public License // 0x0
	{
	public:
		UnityEngine::UnicodeString* _key; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x18
}
