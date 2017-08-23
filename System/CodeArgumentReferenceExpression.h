#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeArgumentReferenceExpression : public CodeExpression // 0x18
	{
	public:
		UnityEngine::UnicodeString* parameterName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
