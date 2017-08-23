#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Diagnostics
{
	class InstanceDataCollection : public DictionaryBase // 0x18
	{
	public:
		UnityEngine::UnicodeString* counterName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
