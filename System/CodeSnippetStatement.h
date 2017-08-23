#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeSnippetStatement : public CodeStatement // 0x30
	{
	public:
		UnityEngine::UnicodeString* value; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
