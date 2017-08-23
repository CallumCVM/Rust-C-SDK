#pragma once

#include "..\System\CodeDom\CodeEventReferenceExpression.h"
#include "..\System\CodeDom\CodeExpression.h"

namespace System
{
	namespace CodeDom
{
	class CodeRemoveEventStatement : public CodeStatement // 0x30
	{
	public:
		System::CodeDom::CodeEventReferenceExpression* eventRef; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeExpression* listener; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
