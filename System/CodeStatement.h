#pragma once

#include "..\System\CodeDom\CodeLinePragma.h"
#include "..\System\CodeDom\CodeDirectiveCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeStatement : public CodeObject // 0x18
	{
	public:
		System::CodeDom::CodeLinePragma* linePragma; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeDirectiveCollection* endDirectives; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeDirectiveCollection* startDirectives; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
