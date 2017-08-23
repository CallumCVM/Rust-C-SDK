#pragma once

#include "..\Mono\Xml\Xsl\MSXslScriptManager\ScriptingLanguage.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Policy\Evidence.h"

namespace rust 
{
	class MSXslScript : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* implementsPrefix; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* code; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Policy::Evidence* evidence; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Xml::Xsl::MSXslScriptManager::ScriptingLanguage language; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
