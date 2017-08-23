#pragma once

#include "..\System\CodeDom\CodeTypeReferenceCollection.h"
#include "..\System\CodeDom\CodeAttributeDeclarationCollection.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace CodeDom
{
	class CodeTypeParameter : public CodeObject // 0x18
	{
	public:
		System::CodeDom::CodeTypeReferenceCollection* constraints; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeAttributeDeclarationCollection* customAttributes; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool hasConstructorConstraint; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
