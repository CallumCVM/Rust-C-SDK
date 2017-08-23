#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\CodeExpression.h"
#include "..\System\CodeDom\CodeTypeReferenceCollection.h"

namespace System
{
	namespace CodeDom
{
	class CodeMethodReferenceExpression : public CodeExpression // 0x18
	{
	public:
		UnityEngine::UnicodeString* methodName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeExpression* targetObject; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReferenceCollection* typeArguments; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
