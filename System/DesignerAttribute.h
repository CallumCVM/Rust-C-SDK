#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
	class DesignerAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* basetypename; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
