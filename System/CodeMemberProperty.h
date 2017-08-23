#pragma once

#include "..\System\CodeDom\CodeStatementCollection.h"
#include "..\System\CodeDom\CodeTypeReferenceCollection.h"
#include "..\System\CodeDom\CodeParameterDeclarationExpressionCollection.h"
#include "..\System\CodeDom\CodeTypeReference.h"

namespace System
{
	namespace CodeDom
{
	class CodeMemberProperty : public CodeTypeMember // 0x50
	{
	public:
		System::CodeDom::CodeStatementCollection* getStatements; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReferenceCollection* implementationTypes; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeParameterDeclarationExpressionCollection* parameters; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* privateImplementationType; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeStatementCollection* setStatements; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::CodeDom::CodeTypeReference* type; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		bool hasGet; // 0x80 (size: 0x1, flags: 0x1, type: 0x2)
		bool hasSet; // 0x81 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x88
}
