#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ComponentHelpAttribute : public BaseEditorExAttribute // 0x28
	{
	public:
		UnityEngine::UnicodeString* help; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x30
}
