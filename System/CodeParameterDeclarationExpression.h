#pragma once

#include "..\System\CodeDom\CodeAttributeDeclarationCollection.h"
#include "..\System\CodeDom\FieldDirection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\CodeTypeReference.h"

namespace System
{
	namespace CodeDom
{
	class CodeParameterDeclarationExpression : public CodeExpression // 0x18
	{
	public:
		System::CodeDom::CodeAttributeDeclarationCollection* customAttributes; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeTypeReference* type; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::FieldDirection direction; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
