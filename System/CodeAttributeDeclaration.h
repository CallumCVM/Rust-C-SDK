#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\CodeDom\CodeAttributeArgumentCollection.h"
#include "..\System\CodeDom\CodeTypeReference.h"

namespace System
{
	namespace CodeDom
{
	class CodeAttributeDeclaration : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::CodeDom::CodeAttributeArgumentCollection* arguments; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* attribute; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
