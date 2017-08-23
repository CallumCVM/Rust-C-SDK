#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\CodeTypeReference.h"
#include "..\System\CodeDom\CodeTypeReferenceCollection.h"
#include "..\System\CodeDom\CodeTypeReferenceOptions.h"

namespace System
{
	namespace CodeDom
{
	class CodeTypeReference : public CodeObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* baseType; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeTypeReference* arrayElementType; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReferenceCollection* typeArguments; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int arrayRank; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		bool isInterface; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		bool needsFixup; // 0x35 (size: 0x1, flags: 0x1, type: 0x2)
		System::CodeDom::CodeTypeReferenceOptions referenceOptions; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
