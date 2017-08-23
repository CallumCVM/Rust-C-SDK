#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace ComponentModel
{
	class CategoryAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* category; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool IsLocalized; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
