#pragma once

#include "..\System\CodeDom\CodeComment.h"

namespace System
{
	namespace CodeDom
{
	class CodeCommentStatement : public CodeStatement // 0x30
	{
	public:
		System::CodeDom::CodeComment* comment; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
