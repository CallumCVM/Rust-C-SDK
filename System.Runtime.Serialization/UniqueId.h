#pragma once

#include "..\System\Guid.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class UniqueId : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* id; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Guid guid; // 0x18 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
