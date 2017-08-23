#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeVariableReferenceExpression : public CodeExpression // 0x18
	{
	public:
		UnityEngine::UnicodeString* variableName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
