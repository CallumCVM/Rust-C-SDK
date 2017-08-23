#pragma once

#include "..\System\CodeDom\CodeTypeReferenceCollection.h"
#include "..\System\CodeDom\CodeTypeReference.h"

namespace System
{
	namespace CodeDom
{
	class CodeMemberEvent : public CodeTypeMember // 0x50
	{
	public:
		System::CodeDom::CodeTypeReferenceCollection* implementationTypes; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* privateImplementationType; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* type; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
