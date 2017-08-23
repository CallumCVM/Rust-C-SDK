#pragma once

#include "..\System\CodeDom\CodeTypeReferenceCollection.h"
#include "..\System\CodeDom\CodeParameterDeclarationExpressionCollection.h"
#include "..\System\CodeDom\CodeTypeReference.h"
#include "..\System\CodeDom\CodeStatementCollection.h"
#include "..\System\CodeDom\CodeAttributeDeclarationCollection.h"
#include "..\System\CodeDom\CodeTypeParameterCollection.h"
#include "..\System\EventHandler.h"

namespace System
{
	namespace CodeDom
{
	class CodeMemberMethod : public CodeTypeMember // 0x50
	{
	public:
		System::CodeDom::CodeTypeReferenceCollection* implementationTypes; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeParameterDeclarationExpressionCollection* parameters; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* privateImplements; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* returnType; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeStatementCollection* statements; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeAttributeDeclarationCollection* returnAttributes; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeParameterCollection* typeParameters; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* PopulateImplementationTypes; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* PopulateParameters; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::EventHandler* PopulateStatements; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		int populated; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xa8
}
