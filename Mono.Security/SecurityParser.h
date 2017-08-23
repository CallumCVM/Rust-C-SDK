#pragma once

#include "..\System\Security\SecurityElement.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\Stack.h"

namespace Mono
{
	namespace Xml
{
	class SecurityParser : public MiniParser // 0x28
	{
	public:
		System::Security::SecurityElement* root; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* xmldoc; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::SecurityElement* current; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Stack* stack; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		int pos; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
