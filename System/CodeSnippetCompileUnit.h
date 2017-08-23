#pragma once

#include "..\System\CodeDom\CodeLinePragma.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeSnippetCompileUnit : public CodeCompileUnit // 0x40
	{
	public:
		System::CodeDom::CodeLinePragma* linePragma; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* value; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
