#pragma once

#include "..\System\CodeDom\CodeLinePragma.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeNamespaceImport : public CodeObject // 0x18
	{
	public:
		System::CodeDom::CodeLinePragma* linePragma; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* nameSpace; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
