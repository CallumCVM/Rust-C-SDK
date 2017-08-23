#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace CSharp
{
	class CSharpCodeGenerator : public CodeGenerator // 0x38
	{
	public:
		System.Collections.Generic.IDictionary<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> providerOptions; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		bool dont_write_semicolon; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
