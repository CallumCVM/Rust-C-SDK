#pragma once

#include "..\System\CodeDom\CodeExpressionCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeConstructor : public CodeMemberMethod // 0xa8
	{
	public:
		System::CodeDom::CodeExpressionCollection* baseConstructorArgs; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpressionCollection* chainedConstructorArgs; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xb8
}
